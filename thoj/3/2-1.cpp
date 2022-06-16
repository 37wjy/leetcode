#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

// n辆车，m种油漆，第i种油漆够涂ai辆车，同时所有油漆恰好能涂完n辆车。若任意两辆相邻的车颜色不能相同，有多少种涂油漆的方案
// m：如题,[1,20]
// a：长度为m的数组，意义如题; ai: [1,5]
// 返回值：方案数
// f: memorization
const int N = 20, mod = 23333;
int f[N][N][N][N][N][N], n;  //memset( f, -1, sizeof(f));
// 参数：第x辆车，第x-1辆车颜色为p，四种颜色各自剩余量
int dfs(int x, int p, int c1, int c2, int c3, int c4) {
	if(x == n+1)
		return 1;
	int &ans = f[x][p][c1][c2][c3][c4];
	if(ans != -1)
		return ans;
	ans = 0;
	if(p!=1 && 0<c1)
		ans += dfs( x+1, 1, c1-1, c2, c3, c4);
	if(p!=2 && 0<c2)
		ans += dfs( x+1, 2, c1, c2-1, c3, c4);
	if(p!=3 && 0<c3)
		ans += dfs( x+1, 3, c1, c2, c3-1, c4);
	if(p!=4 && 0<c4)
		ans += dfs( x+1, 4, c1, c2, c3, c4-1);
	
	return ans;
}

int dp(int a, int b, int c, int d, int e, int last){
    //n==0,返回1，即空也表示一种方案
    if((a|b|c|d|e) == 0)
        return 1;
    if(f[a][b][c][d][e][last] != -1)//如果之前算过答案，直接返回
        return f[a][b][c][d][e][last];
    long long ret = 0;
    //以下(last==2)等表达式的意思是：若这个表达式成立得到的是1否则是0
    if(a)
        //若last==2，则表示上一辆车是从b里取出来放到了a里，所以a中可以选择的油漆种类要少一个
        ret += dp(a-1, b, c, d, e, 1)*(a - (last==2));
    if(b)
        ret += dp(a+1, b-1, c, d, e, 2)*(b - (last==3));
    if(c)
        ret += dp(a, b+1, c-1, d, e, 3)*(c - (last==4));
    if(d)
        ret += dp(a, b, c+1, d-1, e, 4)*(d - (last==5));
    if(e)
        ret += dp(a, b, c, d+1, e-1, 5)*e;
    return f[a][b][c][d][e][last] = ret % mod;
}


int getAnswer(int m, vector<int> a) {
    /* 请在这里设计你的算法 */
	memset( f, -1, sizeof(f));
	n = 0;
    vector<int> b(6,0);
    for(int i=0; i<m; ++i)
        b[a[i]]++;
    return dp(b[1],b[2],b[3],b[4],b[5],0);
}

// ================= 代码实现结束 =================

int main() {
    int m;
    scanf("%d", &m);
    vector<int> a;
    for (int i = 0; i < m; ++i) {
        int x;
        scanf("%d", &x);
        a.push_back(x);
    }
    printf("%d\n", getAnswer(m, a));
    return 0;
}

