#include <string>
#include <vector>
#include <utility>
#include <map>
#include <set>

using namespace std;

class Solution
{
public:
    vector<int> gridIllumination(int n, vector<vector<int> > &lamps, vector<vector<int> > &queries)
    {
        set<pair<int, int> > point;
        map<int, int> r, c, d, rd;

        // 会有重复点 然而灯只有一个 因此采用set
        for (int i = 0; i < lamps.size(); i++)
        {
            int x = lamps[i][0], y = lamps[i][1];
            if (point.find( {x, y} ) == point.end())
            {
                point.insert( {x, y} );
                r[x]++;
                c[y]++;
                d[x - y]++; //斜对角唯一 -(n-1)~(n-1)
                rd[x + y]++;
            }
        }

        vector<int> ans(queries.size());
        for (int i = 0; i < queries.size(); i++)
        {
            int x = queries[i][0], y = queries[i][1];
            if (r[x] || c[y] || d[x - y] || rd[x + y])
            {
                ans[i] = 1;
                for (int rx = -1; rx <= 1; rx++)
                {
                    for (int ry = -1; ry <= 1; ry++)
                    {
                        int nx = x + rx, ny = y + ry;
                        if (point.find({nx, ny}) != point.end())
                        {
                            point.erase({nx, ny});
                            r[nx]--;
                            c[ny]--;
                            d[nx - ny]--;
                            rd[nx + ny]--;
                        }
                    }
                }
            }
        }

        return ans;
    }
    
};
int main(int argc, char const *argv[])
{
    Solution s = Solution();
    vector<vector<int> > v1{[[1,2]]};
    vector<vector<int> > v2{[[1,2]]};
    s.gridIllumination(2, v1, v2);
    return 0;
}