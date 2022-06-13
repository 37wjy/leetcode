/* 道路升级 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int N = 500005;

class UnionSet
{
public:
    int f[N];
    void init(int n)
    {
        for (int i = 0; i <= n; i++)
        {
            f[i] = i;
        }
    }

    int find(int x)
    {
        return f[x] == x ? x : f[x] = find(f[x]);
    }

    bool merge(int x, int y)
    {
        int setX = find(x);
        int setY = find(y);
        if (setX != setY)
        {
            f[setX] = setY;
            return true;
        }
        return false;
    }
} union_set;

vector<int> getAns(int n, int m, vector<int> &u, vector<int> &v)
{
    vector<int> ans;
    union_set.init(n);
    for (int i = m - 1; i >= 0; --i)
    {
        if (union_set.merge(u[i], v[i]))
            ans.push_back(i + 1);
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    vector<int> u(m), v(m);

    for (int i = 0; i < m; i++)
    {
        cin >> u[i] >> v[i];
    }
    vector<int> ans = getAns(n, m, u, v);
    cout<<ans.size()<<'\n';
    for (int i : ans)
    {
        cout << i << '\n';
    }

    return 0;
}
