#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.size(), m = p.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        dp[0][0] = 1;
        // 考虑边界条件：前缀的p[j-1]=='*'可匹配空字符串，即dp[0][j]=1;
        for (int j = 1; j <= m; ++j) {
            if (p[j - 1] == '*') {
                dp[0][j] = 1;
            }
            else {
                break;
            }
        }
        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                if(s[i-1]==p[j-1] || p[j-1]=='?'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if(p[j-1]=='*'){
                    dp[i][j] = dp[i-1][j] | dp[i][j-1] | dp[i-1][j-1];
                }
            }
        }
        return dp[n][m];
    }
};