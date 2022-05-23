#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.length(),m=p.size();
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        dp[0][0] = 1;

        for (size_t i = 0; i < 10; i++)
        {
            /* code */
        }
        


        return true;
    }
};