#include <vector>
#include <queue>
using namespace std;


class Solution
{
private:
    /* data */
    vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
public:
    int numIslands(vector<vector<char>> &grid)
    {
        int cnt=0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j]=='1')
                {
                    setZero(grid,i,j);
                    cnt++;
                }
            }
        }
        return cnt;
    }

    void setZero(vector<vector<char>> &grid,int x,int y)
    {
        if (grid[x][y]=='0') return;
        for (int i = 0; i < 4; i++)
        {
            int new_x=x+dir[i][0] ,  new_y=y+dir[i][1];
            if (new_x>=0&&new_y>=0&&new_x<grid.size()&&new_y<grid[0].size())
            {
                grid[x][y]='0';
                setZero(grid,new_x,new_y);
            }
        }
    }
};

class SolutionBfs
{
private:
    /* data */
    vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
public:
    int numIslands(vector<vector<char>> &grid);
    void setZero(vector<vector<char>> &grid,int x,int y);
};




int SolutionBfs::numIslands(vector<vector<char>> &grid)
{
    int cnt=0;
    assert(grid.size()>0);
    vector<vector<char>> mtx(grid);
    setZero(mtx,0,0);
    return cnt;
}


void SolutionBfs::setZero(vector<vector<char>> &grid,int x,int y)
{
    
}

