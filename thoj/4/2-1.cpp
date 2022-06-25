#include <bits/stdc++.h>
#include<iostream>
#include<vector>
#include <math.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
/* 
[对于求质数的问题，可以直接用Eratosthenes筛法求解。]

[对于求邓老师数的问题，考虑Eratosthenes筛法中“筛去”合数的逻辑，是否可以对其略作修改，使之支持筛出“非邓老师数”呢？]
 */

// 本函数求解质数或邓老师数（将这两个功能合并在了一起）
// n, k：意义均与题目描述相符
// 返回值：如果 k=0，则将所求的质数按从小到大的顺序放入返回值中；如果 k=1，则将所求的邓老师数按从小到大的顺序放入返回值中。
vector<int> getAnswer(int n, int k) {
    /* 请在这里设计你的算法 */
    vector<int> a(n+1,1);
    int t1l = n;
    for (int i = 2; i <= t1l; i++)
    {
        if (a[i])
        {
            for (int j = i; j <= t1l/i; j++)
            {
                a[i*j] = 0;
            }
        }
    }
    vector<int> ans;
    if(k==0){
        for(int i=2; i<=n;i++){
            if(a[i])ans.push_back(i);
        }
        return ans;
    }
    for (int i = 2; i <= t1l; i++)
    {
        if (a[i])
        {
            for (int  j = i; j <= n/i; j++)
            {
                if (a[j])
                {
                   ans.push_back(j*i);
                }                
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

// ================= 代码实现结束 =================

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    vector<int> ans = getAnswer(n, k);
    for (vector<int>::iterator it = ans.begin(); it != ans.end(); ++it)
        printf("%d\n", *it);
    return 0;
}
