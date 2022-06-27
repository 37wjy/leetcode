#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>

#define MAXN 5000

using namespace std;

char a[MAXN + 10], b[MAXN + 10];
int dp[MAXN + 10][MAXN + 10];
int na, nb;

int s[6][6] = {
    {0, 1, 1, 1, 1, 0},
    {1, 4, 2, 2, 2, 1},
    {1, 2, 4, 2, 2, 1},
    {1, 2, 2, 4, 2, 1},
    {1, 2, 2, 2, 4, 1},
    {0, 1, 1, 1, 1, 0}};
int change(char a)
{
    if (a == 'A')
        return 1;
    if (a == 'G')
        return 3;
    if (a == 'C')
        return 2;
    if (a == 'T')
        return 4;
    else
        return 0;
}
int solve()
{
    int i=0;
    for (int i = 1; i <= na; i++)
        a[i] = change(a[i]);
    for (int i = 1; i <= nb; i++)
        b[i] = change(b[i]);

    for (int i = 1; i <= na; i++)
        dp[0][i] = dp[0][i - 1] + s[5][a[i]];

    for (int i = 1; i <= nb; i++)
        dp[i][0] = dp[i - 1][0] + s[b[i]][5]; // cout<<"a";
    
    for (int i = 1; i <= nb; i++)
        for (int j = 1; j <= na; j++)
            dp[i][j] = max(
                max(dp[i - 1][j - 1] + s[b[i]][a[j]], dp[i - 1][j] + s[0][b[i]]),
                dp[i][j - 1] + s[0][a[j]]);
    return dp[nb][na];
}

int main()
{
    scanf("%d%s", &na, a + 1);
    scanf("%d%s", &nb, b + 1);
    printf("%d\n", solve());
    return 0;
}
