#include<iostream>
#include <vector>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxm=1e5+10;
int n,m,need,l,r,cnt,tot,ans;
int u[maxm],v[maxm],w[maxm],c[maxm];
int fa[maxm];
struct Edge {int u,v,w,c;};
Edge e[maxm];
vector<Edge> edge(maxm);

void init()
{
    for (int i = 0; i <= n; i++)
        fa[i] = i;
}
int find(int x)
{
    return x == fa[x] ? fa[x] : fa[x] = find(fa[x]);
}
bool connect(int x, int y)
{
    x = find(x), y = find(y);
    if (x == y)
        return false;
    fa[x] = y;
    return true;
}

void shift(int x)
{
    for (int i = 1; i <= m; i++)
        if (edge[i].c)
            edge[i].w += x;
}

bool kruskal(int x)
{
	tot=0,cnt=0;
	int f1,f2,sum=0;
    init();
    shift(x);
    sort(edge.begin() + 1, edge.begin() + m + 1, [](Edge &l, Edge &r){ return l.w == r.w ? l.c > r.c : l.w < r.w; });
	
    for(int i=1;i<=m;i++)
	{
		if(connect(edge[i].u,edge[i].v))
		{
			sum++;
			tot+=e[i].w;
			if(e[i].c) cnt++;//记录白边数量
		}
		if(sum==n-1) return cnt>=need;
	}
}
int main()
{
	cin>>n>>m>>need;
	for(int i=1;i<=m;i++)  cin>>edge[i].u>>edge[i].v>>edge[i].w>>edge[i].c;
	l=-10005,r=10005;
	while(l<r)
	{
		int mid=(l+r)>>1;
		if(kruskal(mid)) l=mid+1,ans=tot-need*mid;
		else r=mid;
	}//二分答案
	cout<<ans;
	return 0;
}
