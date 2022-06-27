#include <bits/stdc++.h>

using namespace std;



int getAnswer(int n, vector<int> &a, vector<int> &b){
    int ans = 0, h = 1;
    for(int i = 1; i <= n; ++i)
        if(a[i] >  b[h])
            ++ans,++h;
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    vector<int> a(n+1), b(n+1);
    vector<bool>exist(2*n+1,0);
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        exist[a[i]] = 1;
    }
    int t = 0;
    for (int i = 1; i <= 2 * n; i++)
    {
        if(!exist[i]) b[t++] = i;
    }
    sort(a.begin()+1,a.end());
    cout<<getAnswer(n,a,b)<<'\n';

    return 0;
}
