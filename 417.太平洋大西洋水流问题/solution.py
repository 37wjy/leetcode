
from typing import List

DIRS = (0, 1), (0, -1), (-1, 0), (1, 0)

class Solution:
    def pacificAtlantic(self, heights: List[List[int]]) -> List[List[int]]:
        m, n = len(heights), len(heights[0])

        def helper(start):
            explored = set(start)
            def dfs(x, y):
                for dx, dy in DIRS:
                    if 0 <= (nx := x + dx) < m and 0 <= (ny := y + dy) < n and heights[nx][ny] >= heights[x][y] and (nx, ny) not in explored:
                        explored.add((nx, ny))
                        dfs(nx, ny)
            for sx, sy in start:
                dfs(sx, sy)
            return explored
        
        return list(map(list, helper([(0, i) for i in range(n)] + [(i, 0) for i in range(1, m)]) &
                              helper([(m - 1, i) for i in range(n)] + [(i, n - 1) for i in range(m - 1)])))


