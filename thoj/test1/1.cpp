//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// ================= 代码实现开始 =================

int black=0;
struct Edge
{
    int x, y, w, t; // 边的两个端点为x和y，边权为w。若为关键边则t=1，否则t=0
};
vector<int> root;

int findRoot(int x)
{
    return x == root[x] ? x : root[x] = findRoot(root[x]);
}

bool concat(int x, int y)
{
    int fx = findRoot(x), fy = findRoot(y);
    if (fx == fy)
        return false;
    root[fx] = fy;
    return true;
}

int fool(){

}

// n, m, k如题所述。edge为一个长度为m的Edge数组，每个元素描述一条边
// 返回满足条件的最小生成树的权值之和
int getAnswer(int n, int m, int k, vector<Edge> edge)
{
    int ans = 0, kc = 0, i = 0, edge_cn = 0;
    root.resize(n + 1);

    for (; i <= n; i++)
        root[i] = i;

    sort(edge.begin(), edge.end(), [](Edge l, Edge r)
         { return l.t == r.t ? l.w < r.w : l.t > r.t; });

    for (int i = 0; i < black-k; i++)
    {
        
    }
    

    for (i = 0; i < m and kc < (n-k-1); i++)
    {
        int x = edge[i].x, y = edge[i].y;
        if (concat(x, y))
        {
            ans += edge[i].w;
            edge_cn++;
            kc++;
            cout<<edge[i].x<<' '<<edge[i].y<<' '<<edge[i].w<<' '<<edge[i].t<<'\n';
        }
    }

    
    for (; i < m and edge_cn < n; i++)
    {           
        int x = edge[i].x, y = edge[i].y;
        if (concat(x, y))
        {
            ans += edge[i].w;
            edge_cn++;
            cout<<edge[i].x<<' '<<edge[i].y<<' '<<edge[i].w<<'\n';
        }
    }
    //cout<<endl;
    return ans;
}


// ================= 代码实现结束 =================

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;
    vector<Edge> edge;
    cin >> n >> m >> k;

    for (int i = 0; i < m; ++i)
    {
        int x, y, w, t;
        cin >> x >> y >> w >> t;
        if (t)
        {
            black++;
        }
        edge.push_back((Edge){x, y, w, t});
    }

    cout << getAnswer(n, m, k, std::move(edge)) << '\n';
    return 0;
}

//对于 100% 的数据，n≤50000,m≤100000
/*
8 20 4
5 3 22 1
3 7 32 0
5 2 24 0
5 1 39 0
3 6 31 0
8 6 2 1
1 7 25 1
7 6 20 1
3 6 96 1
3 4 36 0
2 3 32 1
3 8 36 0
7 1 77 0
8 7 30 0
5 4 81 0
7 4 14 0
8 6 21 0
5 2 92 1
1 8 66 0
5 8 15 1
 */
/* 
8 6 2 1
5 8 15 1
7 6 20 1
5 3 22 1

*/