//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

pair<int, int> move(pair<int, int> pos, int move_dir, char wind_dir)
{
    switch (move_dir)
    {
    case 1:
        /* code */
        break;
    case 2:
        /* code */
        break;
    case 3:
        /* code */
        break;
    case 4:
        /* code */
        break;
    default:
        break;
    }

    switch (wind_dir)
    {
    case 'U' /* constant-expression */:
        /* code */
        break;

    case 'D' /* constant-expression */:
        /* code */
        break;

    case 'L' /* constant-expression */:
        /* code */
        break;

    case 'R' /* constant-expression */:
        /* code */
        break;

    default:
        break;
    }
}

// =================== 代码实现开始 ========================
//   参数：如题目描述
// 返回值：抵达目的地所用的最少天数
long long solve(int X1, int Y1, int X2, int Y2, int n, string s)
{

    return 0;
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
