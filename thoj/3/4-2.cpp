//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#define ll long long
using namespace std;

// ================= 代码实现开始 =================

const int N = 500005;

/* 请在这里定义你需要的全局变量 */

// 计算str中有多少个回文子串
// 返回值：子串的数目
//适用杂乱分布
long long getAnswer1(string str)
{
    /* 请在这里设计你的算法 */
    ll ans = 0;
    int ml = 2 * str.size() - 1, size = str.size();
    for (int i = 0; i < ml; i++)
    {
        int l = i / 2, r = (i + 1) / 2;
        int cnt = 0;
        for (; l >= 0 && r < size && str[l] == str[r]; --l, ++r)
        {
            cnt++;
        }
        ans += cnt;
    }

    return ans;
}

long long getAnswer(string str)
{
    ll count = 0;
    int length = str.size(); //获取字符串的长度
    vector<vector<bool>> dp(length,vector<bool>(length,false));
    for (int i = length - 1; i >= 0; i--)
    {
        for (int j = i; j < length; j++)
        {
            if (str[i] != str[j])
            { 
                continue;
            }
            dp[i][j] = (j - i <= 2 || dp[i + 1][j - 1]); // r
            if (dp[i][j])
            {
                count++;
            }
        }
    }
    return count;
}
// ================= 代码实现结束 =================

char _s[N];

int main()
{
    scanf("%s", _s + 1);
    printf("%lld\n", getAnswer(_s + 1));
    return 0;
}
