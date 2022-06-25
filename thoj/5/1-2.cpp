#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

const int N = 10005;

// 为了减少复制开销，我们直接读入信息到全局变量中，并统计了每个点的入度到数组in中
// n, m：点数和边数
// in：in[i]表示点i的入度
// e：e[i][j]表示点i的第j条边指向的点
int n, m, in[N];
vector<int> e[N];

/* 请在这里定义你需要的全局变量 */

// 判断所给有向无环图是否存在唯一的合法数列
// 返回值：若存在返回1；否则返回0。
/*
[本题就是判断一个有向无环图是否存在唯一的拓扑序列。]

[回忆一下求拓扑序列是如何做的：每一次都取一个入度为0的点，将这个点取出来放进拓扑序列里，然后将这个点连向的所有点的入度减去1。]

[可以发现，在“每一次都取一个入度为0”这一步，若入度为0的点数多于1个，则显然拓扑序不唯一。]
[因此按照这个拓扑序算法做一遍就好。]
 */
bool getAnswer()
{
    /* 请在这里设计你的算法 */
    queue<int> q;

    //找出最开始就入度为0的点，放到队列里
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0) q.push(i);
    }

    while (!q.empty())
    {
        //判断队列里是否出现两个元素
        if (q.size() > 1)
            return 0;

        int h = q.front(); q.pop();

        for (auto t : e[h])
        {
            if (--in[t] == 0) q.push(t);
        }
    }
    return 1;
}

// ================= 代码实现结束 =================

int main()
{
    int T;
    for (scanf("%d", &T); T--;)
    {
        scanf("%d%d", &n, &m);
        for (int i = 1; i <= n; ++i)
        {
            in[i] = 0;
            e[i].clear();
        }
        for (int i = 0; i < m; ++i)
        {
            int x, y;
            scanf("%d%d", &x, &y);
            e[x].push_back(y);
            ++in[y];
        }
        printf("%d\n", getAnswer());
    }
    return 0;
}
