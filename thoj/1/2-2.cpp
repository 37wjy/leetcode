/*
输入格式
第一行一个整数 n，表示单词种数。

第 2 行到第 n+1行，第 i+1 行包含一个正整数 wi，表示第 i 种单词的出现次数。
 一种最优方案是令 s1=000，s2=001，s3=01，s4=1。这样文章总长即为 1*3+1*3+2*2+1*2=12。
另一种最优方案是令 s1=00，s2=01，s3=10，s4=11。这样文章总长也为 12。
 */

#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

bool cmp(uint64_t &l, uint64_t &r)
{
    return l > r;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    vector<uint64_t> arr(n);

    int i = 0;
    for (; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end(), cmp);

    uint64_t sum = 0;
    uint64_t bl = 0;
    uint64_t el = ceil(log2(n));
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    uint64_t umax = 0x1;
    umax <<= 62;

    for (i = 0; i < n - 1; i++)
    {
        bl += (i + 1) * arr[i];

        if (bl > umax)
        {
            // cout<<bl<<'\t'<<umax<<'\n';
            n = 1;
            break;
        }
    }

    if (n > 1)
    {
        bl += arr.back() * (n - 1);
    }
    // cout<<sum*el<<'\t'<<bl<<'\n';
    cout << min(bl, sum * el);
    return 0;
}
