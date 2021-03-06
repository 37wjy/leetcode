#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

const int M = 505, L = 1000005;

// c：trie树上的边，c[x][y]表示从节点x出发（x从1开始），字符为y的边（y范围是0到25）
// sz：sz[x]表示x节点的子树中终止节点的数量（子树包括x自身）
// cnt：trie树上节点的数目
int cnt=0;
vector<vector<int>> c(L,vector<int>(26,0));
vector<int> sz(L,0);

// 将字符串s加入到trie树中
// s：所要插入的字符串
void add(char *s) {
    /* 请在这里设计你的算法 */
    int i = 0, x=0;
    for (int i = 0; i < strlen(s); i++)
    {
        int y = s[i]-'a';
        if (c[x][y]<1)
        {
            c[x][y] = ++cnt;
        }
        x = c[x][y];
        sz[x] += 1;
    }
}

// 用于计算sz数组
// x：当前节点
void dfs(int x) {
    /* 请在这里设计你的算法 */
/*     for (int y = 0; y < 26; y++)
    {
        if (c[x][y])
        {
            dfs(c[x][y]);
            c
        }   
    } */
}

// 用字符串s沿着trie树上走，找到相应的节点
// s：所给字符串
// 返回值：走到的节点
int walk(char *s) {
    /* 请在这里设计你的算法 */
    int i = 0, x=0;
    for (; i < strlen(s); i++)
    {
        int y = s[i]-'a';
        if (c[x][y]<1){
            return 0;
        }
        else{
            x = c[x][y];
        }
    }
    return x;
}

// ================= 代码实现结束 =================

char s[M];

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for (; n--;) {
        scanf("%s", s);
        add(s);
    }
    dfs(0);
    sz[0] = 0;
    for (; m--;) {
        scanf("%s", s);
        printf("%d\n", sz[walk(s)]);
    }
    return 0;
}
