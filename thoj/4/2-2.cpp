

#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

const int N = 500005, mo = 23333;

/* 请在这里定义你需要的全局变量 */

// 为了减少复制开销，我们直接读入信息到全局变量中
// s：题目所给字符串，下标从1开始
// n：字符串长度
int n;
char s[N];

void f(vector<int> &pre, vector<long long> &cache, int i)
{
    cache[i] = (pre[i] == 0 ? (2 * cache[i - 1] + 1) : (2 * cache[i - 1] + mo - cache[pre[i] - 1])) % mo;
}

// 求出字符串s有多少不同的子序列
// 返回值：s不同子序列的数量，返回值对mo取模
// 令f(i)为前i中本质不同的的子序列个数,令pre(i)表示字符si之前出现的位置,则
int getAnswer()
{
    /* 请在这里设计你的算法 */
    vector<int> map(26, 0);
    vector<int> pre(n + 1, 0);
    vector<long long> cache(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        int index = s[i] - 'a';
        pre[i] = map[index];
        map[index] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        f(pre, cache, i);
    }

    return cache[n];
}
// ================= 代码实现结束 =================

int main()
{
    scanf("%s", s + 1);
    n = strlen(s + 1);
    printf("%d\n", getAnswer());
    return 0;
}
