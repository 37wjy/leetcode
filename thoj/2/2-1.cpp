//#include <bits/stdc++.h>
#include <vector>
//#include <stdio.h>
#include <iostream>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

// 求解棋盘上最多能放多少个“车”
// n：棋盘的大小为n×n的
// board：所给棋盘，对于某个位置上的数：若值为1表示可以放“车”；若值为0表示不能放“车”
// 返回值：能放“车”的最大个数
int getAnswer(int n, vector<vector<int>> &board)
{
    /* 请在这里设计你的算法 */
    vector<bool> r(n, 0), c(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (board[i][j])
            {
                r[i] = 1;
                c[j] = 1;
            }
        }
    }
    int sr = 0, sc = 0;
    for (int i = 0; i < n; i++)
    {
        sr += r[i];
        sc += c[i];
    }
    return min(sr, sc);
}

// ================= 代码实现结束 =================

int main()
{
    while (1)
    {
        int n;
        cin>>n;
        vector<vector<int>> e;
        for (int i = 0; i < n; ++i)
        {
            vector<int> t;
            for (int j = 0; j < n; ++j)
            {
                int x;
                scanf("%d", &x);
                t.push_back(x);
            }
            e.push_back(t);
        }
        cout<<getAnswer(n, e)<<'\n';
    }

    return 0;
}
