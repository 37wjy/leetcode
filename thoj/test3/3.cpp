#include <cstdio>
#include <vector>
#include <stack>

#define MAXN 100000

using namespace std;

vector<int> to[MAXN + 10];
int m,n,in[MAXN + 10];



int get_ans() {
    /* your code here */
    stack<int> s;



    return 233;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
    {
        in[i]=0;
    }
    
    while (m--) {
        int u, v;
        scanf("%d%d", &u, &v);
        to[u].push_back(v);
        in[v]++;
    }

    int ans = get_ans();
    printf("%d\n", ans);

    return 0;
}