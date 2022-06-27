#include <bits/stdc++.h>
//#include <vector>
//#include <iostream>

#define MAXN 1000000
#define ll long long

using namespace std;

int a[MAXN + 10];
int n;

// 在此实现你的算法
long long get_ans() {

    vector<int> dp_leftSequence(n+1,0), dp_rightSequence(n+1,0);
    dp_leftSequence[1] = a[1];
    dp_rightSequence[n] = a[n]; //赋边界条件（初始状态）
 
    for(int i = 1; i <= n; i ++)
        dp_leftSequence[i] = max(a[i], dp_leftSequence[i - 1] + a[i]);
        //状态转移方程
    for(int i = 2; i <= n; i ++) //important optmization，简化寻找操作
        if(dp_leftSequence[i] < dp_leftSequence[i - 1])
            dp_leftSequence[i] = dp_leftSequence[i - 1];
    
    for(int i = n - 1; i >= 1; i --)
        dp_rightSequence[i] = max(a[i], dp_rightSequence[i + 1] + a[i]);
        //状态转移方程
    for(int i = n - 1; i >= 1; i --) //important optmization，简化寻找操作
        if(dp_rightSequence[i] < dp_rightSequence[i + 1])
            dp_rightSequence[i] = dp_rightSequence[i + 1];
 
    ll tmp = 0, maxn = -1;
 
    for(int i = 1; i <= n-1; i ++) { //遍历每个点
        tmp = dp_leftSequence[i] + dp_rightSequence[i + 1];
        maxn = max(tmp, maxn);
    }
    return maxn;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%lld\n", get_ans());

    return 0;
}
