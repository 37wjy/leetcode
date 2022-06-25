//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int N = 2 * 5;

pair<int, int> move(pair<int, int> pos, int move_dir, char wind_dir)
{
    int x = pos.first, y = pos.second;
    switch (move_dir)
    {
    case 1: // u
        y += 1;
        break;
    case 2: // d
        y -= 1;
        /* code */
        break;
    case 3: // l
        x -= 1;
        /* code */
        break;
    case 4:
        x += 1;
        /* code */
        break;
    default:
        break;
    }

    switch (wind_dir)
    {
    case 'U' /* constant-expression */:
        y += 1;
        break;

    case 'D' /* constant-expression */:
        y -= 1;
        break;

    case 'L' /* constant-expression */:
        x -= 1;
        break;

    case 'R' /* constant-expression */:
        x += 1;
        break;

    default:
        break;
    }
    return {x, y};
}

void p(vector<vector<long long>> &map, int x_max, int y_max){
    for (int i = 0; i < x_max; i++)
    {
        for (int j = 0; j < y_max; j++)
        {
            if (map[i][j]>=0)
            {
                cout <<"\t"<< map[i][j]<< ",";
            }
            else
            {
                cout <<"\t"<< " ,";
            }
        }
        cout << '\n';
    } 
    cout << endl;
}

// =================== 代码实现开始 ========================
//   参数:如题目描述
// 返回值:抵达目的地所用的最少天数
long long solve(int X1, int Y1, int X2, int Y2, int n, string s)
{
    // int x_min = min(X1, X2), y_min = min(Y1, Y2);
    // X1 = X1 - x_min+1;
    // Y1 = Y1 - y_min+1;
    // X2 = X2 - x_min+1;
    // Y2 = Y2 - y_min+1;
    int x_max = max(X1, X2) + 2, y_max = max(Y1, Y2) + 2;
    vector<vector<long long>> map(x_max, vector<long long>(y_max, -1));
    map[X1][Y1] = 0;
    // map[X2][Y2]=0;

    queue<pair<int, int>> q;
    q.push({X1, Y1});
    long long day = 0;
    char wd = ' ';
    while (!q.empty())
    {
        wd = s[day%n];
        day++;
        int size = q.size();
        for (int a = 0; a < size; a++)
        {
            pair<int, int> pos = q.front();
            q.pop();
            for (int dir = 0; dir < 5; dir++)
            {
                pair<int, int> new_pos = move(pos, dir, wd);
                if (new_pos.first < 0 or new_pos.second < 0 or new_pos.first >= x_max or new_pos.second >= y_max)
                {
                    continue;
                }

                if (map[new_pos.first][new_pos.second] < 0)
                {
                    q.push(new_pos);
                    map[new_pos.first][new_pos.second] = day;
                }

                if (new_pos.first == X2 and new_pos.second == Y2)
                {
                    goto end_pos;
                }
            }
        }
    }

end_pos:
    p(map,x_max,y_max);
    
    return map[X2][Y2];
}

// ================== 代码实现结束 ======================

int main()
{
    int X1, Y1, X2, Y2, n;
    string s;
    cin >> X1 >> Y1 >> X2 >> Y2 >> n >> s;
    cout << solve(X1, Y1, X2, Y2, n, s) << endl;
    return 0;
}
