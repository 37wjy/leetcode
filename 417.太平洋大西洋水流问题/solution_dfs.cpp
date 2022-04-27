#include <iostream>
#include <vector>

using namespace std;

class Solution
{
private:
    int dirs[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    int m, n;
    vector<vector<int>> heights;

    void dfs(int x, int y, vector<vector<bool>> &map)
    {
        if (map[x][y])
        {
            return;
        }
        map[x][y] = true;

        for (auto &&dir : dirs)
        {
            auto nx = x + dir[0], ny = y + dir[1];
            if (nx >= 0 && ny >= 0 && nx < m && ny < n && heights[x][y]<=heights[nx][ny])
            {
                dfs(nx, ny, map);
            }
        }
    }

public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>> &heights)
    {
        m = heights.size(), n = heights[0].size();
        this->heights = heights;
        vector<vector<bool>> pacific(m, vector<bool>(n, false));
        vector<vector<bool>> atlantic(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++)
        {
            dfs(i, 0, pacific);
        }
        for (int j = 1; j < n; j++)
        {
            dfs(0, j, pacific);
        }
        for (int i = 0; i < m; i++)
        {
            dfs(i, n - 1, atlantic);
        }
        for (int j = 0; j < n - 1; j++)
        {
            dfs(m - 1, j, atlantic);
        }

        vector<vector<int>> res{};
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (pacific[i][j] && atlantic[i][j])
                {
                    res.push_back({i, j});
                }
            }
        }

        return res;
    };

    int main(int argc, char const *argv[])
    {
        vector<vector<int> > test = {{1, 2, 2, 3, 5}, {3, 2, 3, 4, 4}, {2, 4, 5, 3, 1}, {6, 7, 1, 4, 5}, {5, 1, 1, 2, 4}};
        vector<vector<int> > result = Solution().pacificAtlantic(test);
        return 0;
    }
};