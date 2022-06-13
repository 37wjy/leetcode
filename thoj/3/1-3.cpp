//#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <cstdio>

typedef long long LL;
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
struct Node
{
    int v, w;
} a[5005];

int dpl[5005][5005];
int dpr[5005][5005];

// n个物品，每个物品有体积价值，求若扔掉一个物品后装进给定容量的背包的最大价值
// n：如题
// w：长度为n+1的数组，w[i]表示第i个物品的价值（下标从1开始，下标0是一个数字-1，下面同理）
// v：长度为n+1的数组，v[i]表示第i个物品的体积
// q：如题
// qV：长度为q+1的数组，qV[i]表示第i次询问所给出的背包体积
// qx：长度为q+1的数组，qx[i]表示第i次询问所给出的物品编号
// 返回值：返回一个长度为q的数组，依次代表相应询问的答案
vector<int> getAnswer(int n, vector<int> w, vector<int> v, int q, vector<int> qV, vector<int> qx)
{
    /* 请在这里设计你的算法 */
    vector<int> ans(q);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 5000; j >= 0; j--)
        {
            if (a[i].w <= j)
                dpl[i][j] = max(dpl[i - 1][j], dpl[i - 1][j - a[i].w] + a[i].v);
            else
                dpl[i][j] = dpl[i - 1][j];
        }
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 5000; j >= 0; j--)
        {
            if (a[i].w <= j)
                dpr[i][j] = max(dpr[i + 1][j], dpr[i + 1][j - a[i].w] + a[i].v);
            else
                dpr[i][j] = dpr[i + 1][j];
        }
    }

    for (int i = 0; i < q; i++)
    {
        int ma = 0;
        for (int j = 0; j <= q; j++)
        {
            ma = max(ma, dpl[qx[i] - 1][i] + dpr[qx[i] + 1][qV[i] - i]);
        }
        ans[i] = ma;
    }
    return ans;
}

// ================= 代码实现结束 =================

int main()
{
    int n, q;
    vector<int> v, w, qv, qx;
    v.push_back(-1);
    w.push_back(-1);
    qv.push_back(-1);
    qx.push_back(-1);
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        v.push_back(a);
        w.push_back(b);
    }
    scanf("%d", &q);
    for (int i = 0; i < q; ++i)
    {
        int a, b;
        scanf("%d%d", &a, &b);
        qv.push_back(a);
        qx.push_back(b);
    }
    vector<int> ans = getAnswer(n, w, v, q, qv, qx);
    for (int i = 0; i < q; ++i)
        printf("%d\n", ans[i]);
    return 0;
}
