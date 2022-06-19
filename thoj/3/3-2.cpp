//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

pair<int, int> toNewState(int n, int m, int nw, int mw, int i)
{
    switch (i)
    {
    case 0:
        return {n, mw};
        break;
    case 1:
        return {nw, m};
        break;
    case 2:
        return {nw, 0};
        break;
    case 3:
        return {0, mw};
        break;
    case 4:
        return {min(n, nw + mw), max(0, mw - n + nw)};
        break;
    default:
        return {max(0, nw - m + mw), min(m, mw + nw)};
    }
}

// 计算答案的函数
// n, m, t, d：意义均与题目描述一致
// 返回值：即为答案
int getAnswer(int n, int m, int t, int d)
{
    /* 请在这里设计你的算法 */
    int ans = d;
    queue<pair<int, int>> q;
    vector<vector<int> > state_map(n+1,vector<int>(m+1,0));
    q.push({0, 0});
    while (!q.empty())
    {
        pair<int, int> s = q.front();
        q.pop();
        if (state_map[s.first][s.second] >= t) // 若已经大于t步，则结束（因为广度优先搜索是由近到远的，故队列中出现距离为t的说明后面的也都不小于t）
            break;
        for (int i = 0; i < 6; ++i)
        {
            pair<int, int> new_s = toNewState(n, m, s.first, s.second, i); // 执行一种操作，到达一种新的状态

            // 若这一状态已达到过，则跳过
            if (state_map[new_s.first][new_s.second] > 0)
                continue;

            // 若这一状态没到达过，则记录新的min_t，计算新的ans，新状态入队
            state_map[new_s.first][new_s.second] = state_map[s.first][s.second] + 1;
            ans = min(ans, abs(new_s.first + new_s.second - d));
            q.push(make_pair(new_s.first, new_s.second));
        }
        if (ans == 0) // 若期望的最小值已经为0，则没必要继续了。
        {
            break;
        } 
    }
    return ans;
}

// ================= 代码实现结束 =================

int main()
{
    int n, m, t, d;
    scanf("%d%d%d%d", &n, &m, &t, &d);
    int ans = getAnswer(n, m, t, d);
    printf("%d\n", ans);
    return 0;
}
