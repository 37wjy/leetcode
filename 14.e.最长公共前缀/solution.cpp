#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int t=strs[0].length();
        string ans=strs[0];
        for (int i = 1; i < strs.size(); i++)
        {
            int j = 0;
            int m=strs[i].size();
            m = min( t, m);
            for (; j < m; j++)
            {
                if (ans[j]!=strs[i][j])
                {
                    break;
                }
            }
            t=j;
        }
        return ans.substr(0,t);
    }
};

