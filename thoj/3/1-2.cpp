//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

// n：物品个数
// V：背包的体积
// t：长度为n的数组，第i个元素若为0，表示物品i为单个物品；若为1，表示物品i为多个物品。（i下标从0开始，下面同理）
// w：长度为n的数组，第i个元素表示第i个物品的价值
// v：长度为n的数组，第i个元素表示第i个物品的体积
// 返回值：最大价值之和
// dp[i]表示容量为i的背包的最大价值
int getAnswer(int n, int V, vector<int> t, vector<int> w, vector<int> v)
{
    vector<int> dp(V + 1, 0);
    for (int i = 0; i < n; i++)
    {
        int vol = v[i], weight = w[i];
        if (t[i])
        {
            for (int j = vol; j <= V; j++)
            {
                dp[j] = max(dp[j], dp[j - vol] + weight);
            }
        }
        else
        {
            for (int j = V; j >= vol; j--)
            {
                dp[j] = max(dp[j], dp[j - vol] + weight);
            }
        }
/*         for (auto i : dp)
        {
            cout << i << " ";
        }
        cout << '\n'; */
    }
    return dp[V];
}

// ================= 代码实现结束 =================

int main()
{
    int n, V;
    // scanf("%d%d", &n, &V);
    cin >> n >> V;
    vector<int> T, W, _V;
    for (int i = 0; i < n; ++i)
    {
        int t, w, v;
        scanf("%d%d%d", &t, &w, &v);
        T.push_back(t);
        W.push_back(w);
        _V.push_back(v);
    }
    printf("%d\n", getAnswer(n, V, T, W, _V));
    return 0;
}
