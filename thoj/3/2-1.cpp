//#include <bits/stdc++.h>

#include <vector>
#include <iostream> 
#include <stdio.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

void go(vector<int> &a, int i,int n, int &total){
    if (i==n)
    {
        total++;
        return;
    }
    
    for (int j = 0; j < a.size(); j++)
    {
        if (i==j or a[j]==0)
        {
            continue;
        }
        a[j]--;
        go(a,j,n+1,&total);
        a[j]++;
    }
}

// n辆车，m种油漆，第i种油漆够涂ai辆车，同时所有油漆恰好能涂完n辆车。若任意两辆相邻的车颜色不能相同，有多少种涂油漆的方案
// m：如题
// a：长度为m的数组，意义如题
// 返回值：方案数
int getAnswer(int m, vector<int> a, int n) {
    /* 请在这里设计你的算法 */
    //vector<int> tmp(n);
    int ans=0;
    go(a,0,0,&ans);
    
    return ans;
}

// ================= 代码实现结束 =================

int main() {
    int m,n;
    scanf("%d", &m);
    vector<int> a;
    for (int i = 0; i < m; ++i) {
        int x;
        scanf("%d", &x);
        a.push_back(x);
        n+=x;
    }
    printf("%d\n", getAnswer(m, a, n));
    return 0;
}
