//#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3 + 10, M = 2e5 + 10;

struct Edge {
	int u, v, w;
	friend bool operator < (const Edge &a, const Edge &b) {
		return a.w < b.w;
	}
}e1[M], e2[M];
int fa[N];
int n, m, k;
pii f[N * 2];

int find(int x) {
	return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void init_edge() {
	for(int i = 1; i <= n; i++) fa[i] = i;
	sort(e1 + 1, e1 + 1 + m,[](Edge l,Edge r){return l.w<r.w;});
    sort(e2 + 1, e2 + 1 + m,[](Edge l,Edge r){return l.w<r.w;});

	for(int i = 1, idx = 0; i <= m; i++) {
		int fx = find(e1[i].u), fy = find(e1[i].v);
		if(fx != fy) {
			fa[fx] = fy;
			e1[++idx] = e1[i];
		}
	}
	for(int i = 1; i <= n; i++) fa[i] = i;
	
	for(int i = 1, idx = 0; i <= m; i++) {
		int fx = find(e2[i].u), fy = find(e2[i].v);
		if(fx != fy) {
			fa[fx] = fy;
			e2[++idx] = e2[i];
		}
	}
}

bool merge(int x, int y) {
	int fx = find(x), fy = find(y);
	if(fx == fy) return 0;
	fa[fx] = fy;
	return 1;
}

pii calc(int x) {
	int l = 1, r = 1, cnt = 0, sum = 0;
	for(int i = 1; i <= n; i++) fa[i] = i;
	while(l < n && r < n) {
		if(e1[l].w > e2[r].w + x) {
			if(merge(e2[r].u, e2[r].v)) {
				sum += e2[r].w + x;
				cnt++;
			}
			r++;
		}
		else {
			if(merge(e1[l].u, e1[l].v)) {
				sum += e1[l].w;
			}
			l++;
		}
	}
	
	while(l < n) {
		if(merge(e1[l].u, e1[l].v)) {
			sum += e1[l].v;
		}
		l++;
	}
	while(r < n) {
		if(merge(e2[r].u, e2[r].v)) {
			sum += e2[r].w + x;
			cnt++;
		}
		r++;
	}
	return {sum, cnt};
}

int query(int x) {
	int l = -1000, r = 1000;
	int res = -1;
	while(l <= r) {
		int mid = (l + r) >> 1;
		if(f[mid + 1000].second <= x) {
			res = f[mid + 1000].first - x * mid;
			r = mid - 1;
		}
		else l = mid + 1;
	}
	return res;
}

void solve() {
	scanf("%d%d%d", &n, &m, &k);
	for(int i = 1; i <= m; i++) {
		int u, v, w1, w2;
		scanf("%d%d%d%d", &u, &v, &w1, &w2);
		e1[i] = {u, v, w1};
		e2[i] = {u, v, w2};
	}
	init_edge();
	for(int i = -1000; i <= 1000; i++) f[i + 1000] = calc(i);
	
	
    printf("%d\n", query(k));

}

int main() {
	//int t; cin >> t; while(t--)
	solve();
	return 0;
}

