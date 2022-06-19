//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
int find(vector<int> &tree, int pos){
    return tree[pos]==pos ?pos: tree[pos] = find(tree,tree[pos]);
}

// 计算最长公共子序列的长度
// n：表示两序列长度
// a：描述序列 a（这里需要注意的是，由于 a 的下标从 1 开始，因此 a[0] 的值为-1，你可以忽略它的值，只需知道我们从下标 1 开始存放有效信息即可）
// b：描述序列b（同样地，b[0] 的值为 -1）
// 返回值：最长公共子序列的长度
int LCS(int n, vector<int> a, vector<int> b)
{
    /* 请在这里设计你的算法 */
    vector<int> tmp(n + 1), cache(n+1,n+1);
    for (int i = 1; i <= n; i++)
    {
        tmp[b[i]] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        a[i] = tmp[a[i]];
    }
    int  m = 0, jlast = 0;

    for (int i = 1; i <= n; i++)
    { 
        int j = jlast;
        for (; j >= 0; j--)
        {
            if (cache[j]<a[i])
            {
                break;
            }
        }
        j++;
        cache[j] = a[i];
        tmp[i] = j+1;
        jlast = max(jlast,tmp[i]);
        m=max(tmp[i],m);
    }

    return m;
}

// ================= 代码实现结束 =================

int main()
{
    int n, tmp;
    vector<int> a, b;
    scanf("%d", &n);
    a.clear();
    b.clear();
    a.push_back(-1);
    b.push_back(-1);
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &tmp);
        a.push_back(tmp);
    }
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &tmp);
        b.push_back(tmp);
    }
    int ans = LCS(n, a, b);
    printf("%d\n", ans);
    return 0;
}
