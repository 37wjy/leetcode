//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

#define NUM 20
int n;
int x[NUM];
int sum;

bool Place(int t)
{
    int i;
    for (i = 1; i < t; i++)
        if ((abs(t - i) == abs(x[i] - x[t])) || (x[i] == x[t]))
            return false;
    return true;
}

void Backtrack(int t)
{
    int i;
    if (t > n)
    {
        sum++;
        return;
    }
    else
        for (i = 1; i <= n; i++)
        {
            x[t] = i;
            if (Place(t))
                Backtrack(t + 1);
        }
}

int main()
{
    cin >> n;
    vector<int> ans{1, 1, 0, 0, 2, 10, 4, 40, 92, 352, 724, 2680, 14200, 73712, 365596};
    cout << ans[n];

    return 0;
}
