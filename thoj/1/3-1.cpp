/*
问题描述
有n个变量和m个“相等”或“不相等”的约束条件，请你判定是否存在一种赋值方案满足所有m个约束条件。

输入格式
第一行一个整数T，表示数据组数。

接下来会有T组数据，对于每组数据：

第一行是两个整数n,m，表示变量个数和约束条件的个数。

接下来m行，每行三个整数a,b,e，表示第a个变量和第b个变量的关系：

若e=0则表示第a个变量不等于第b个变量；
若e=1则表示第a个变量等于第b个变量
输出格式
输出T行，第i行表示第i组数据的答案。若第i组数据存在一种方案则输出"Yes"；否则输出"No"（不包括引号）。


 */

#include <iostream>
#include <vector>
using namespace std;

const int N = 300000;
int Fathers[N], Rank[N];

int find_father(int x)
{    
    return Fathers[x] == x ? x : Fathers[x] = find_father(Fathers[x]);
}

string check()
{
    int m, n;
    cin >> n >> m;
    vector<int> oper(m), h(m), t(m);
    for (int i = 0; i < N; i++)
    {
        Fathers[i] = i;
        Rank[i] = 0;
    }

    for (int j = 0; j < m; j++)
    {
        cin >> h[j] >> t[j] >> oper[j];
        if (oper[j])
        {
            int hf = find_father(h[j]), tf = find_father(t[j]);
            if (hf != tf)
            {
                if (Rank[hf] == Rank[tf])
                {
                    Rank[hf]++;
                }
                if (Rank[hf] > Rank[tf])
                {
                    Fathers[tf] = hf;
                    Rank[hf]++;
                }
                else
                {
                    Fathers[hf] = tf;
                    Rank[tf]++;
                }
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        if (!oper[i])
        {
            if (find_father(h[i]) == find_father(t[i]))
            {
                return "No";
            }
        }
    }
    return"Yes";
}

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    vector<string> ans(T);
    for (int i = 0; i < T; i++)
    {
        ans[i]=check();
    }
    for (int i = 0; i < T; i++)
    {
        cout<<ans[i]<<'\n';
    }
    
    return 0;
}
