//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;
const int maxn = 100002;
int n, m, k;

struct Edge
{
    int u, v, w, t;
};

// edge[maxn];

vector<int> fa(50001);
vector<Edge> edge(maxn);

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

void shift(ll x)
{
    for (int i = 1; i <= m; i++)
        if (edge[i].t)
            edge[i].w += x;
}

ll cost = 0;
ll kruskal(ll x)
{
    init();
    ll high = 0, sum = 0;
    cost = 0;
    shift(x);
    sort(edge.begin() + 1, edge.begin() + m + 1, [](Edge l, Edge r){ return l.w == r.w ? l.t > r.t : l.w < r.w; });

    for (int i = 1; i <= m and sum < n; i++)
    {
        if (connect(edge[i].u, edge[i].v))
        {
            sum++;
            cost += edge[i].w;
            if (edge[i].t)
                high++;
        }
    }
    shift(-x);
    return high;
}

ll solve(ll x)
{
    ll l = -x, r = x, mid;
    ll ans = 0;
    ll ck = 0;
    while (l < r)
    {
        mid = (l + r) >> 1;
        ck = kruskal(mid);
        if (ck >= k)
        {
            l = mid + 1;
            ans = cost - k * mid;
        }
        else
        {
            r = mid;
        }
    }
    return ans;
}

int main()
{
    int bl = INT32_MAX, br = 0, wl = INT32_MAX, wr = 0;
    cin >> n >> m >> k;
    for (int i = 1; i <= m; ++i)
    {
        cin >> edge[i].u >> edge[i].v >> edge[i].w >> edge[i].t;
        if (edge[i].t)
        {
            bl = min(bl, edge[i].w);
            br = max(br, edge[i].w);
        }
        else
        {
            wl = min(wl, edge[i].w);
            wr = max(wr, edge[i].w);
        }
    }
    cout << solve(ll(max(abs(bl - wr), abs(br - wl))) + 1) << '\n';
    return 0;
}
