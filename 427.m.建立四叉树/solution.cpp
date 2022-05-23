#include <iostream>
#include <vector>

using namespace std;



// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};


class Solution1 {
    // 比较暴力 每次遍历
    Node* buildTree(vector<vector<int>>& grid,int xl,int xr,int yl,int yr)
    {
        bool ok = true;
        int t = grid[yl][xl];
        for (int i = yl; i <= yr && ok; i++) {
            for (int j = xl; j <= xr && ok; j++) {
                if (grid[i][j] != t) ok = false;
            }
        }
        if (ok) return new Node(t == 1, true);
        Node* root = new Node(t == 1, false);
        /* 
        // int dx = c - a + 1, dy = d - b + 1;
        // root.topLeft = dfs(a, b, a + dx / 2 - 1, b + dy / 2 - 1); 
        // root.topRight = dfs(a, b + dy / 2, a + dx / 2 - 1, d);
        // root.bottomLeft = dfs(a + dx / 2, b, c, b + dy / 2 - 1);
        // root.bottomRight = dfs(a + dx / 2, b + dy / 2, c, d); 
        */
        return root;
    }
    
public:
    Node* construct(vector<vector<int>>& grid) {
        int yr = grid.size(), xr = grid[0].size(); //不管没有的情况
        return buildTree(grid,0,xr-1,0,yr-1);
    }
};


class Solution1 {
    // 预先算好
    vector<vector<int>> presum;
    Node* buildTree(vector<vector<int>>& grid,int x0,int y0,int x1,int y1)
    {
        int diff = presum[x1][y1] - presum[x1][y0] - presum[x0][y1] + presum[x0][y0];
        if(diff == 0)
            return new Node(false, true);
        if(diff == (x1 - x0) * (y1 - y0))
            return new Node(true, true);
        int hx = (x0 + x1) / 2, hy = (y0 + y1) / 2;
        return new Node(true, false,
                        buildTree(grid, x0, y0, hx, hy),
                        buildTree(grid, x0, hy, hx, y1),
                        buildTree(grid, hx, y0, x1, hy),
                        buildTree(grid, hx, hy, x1, y1));   
    }
    
public:
    Node* construct(vector<vector<int>>& grid) {
        int yr = grid.size(), xr = grid[0].size(); //不管没有的情况
        presum = vector<vector<int>>(yr+1, vector<int>(xr+1,0));
        for (int i = 0; i < yr; i++)
        {
            for (int j = 0; j < xr; j++)
            {
                presum[i+1][j+1] = presum[i + 1][j] + presum[i][j + 1] - presum[i][j] + grid[i][j];   
            }
        }
        return buildTree(grid,0,0,xr-1,yr-1);
    }
};