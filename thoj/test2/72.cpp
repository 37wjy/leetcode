#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

struct node
{
    int l=0;
    int r=0;
    string val = "";
    node(int l, int r, string s):l(l),r(r),val(s){}
};

// 代码实现开始
vector<string> split(string s){
    int l=0,r;
    vector<string> ret;
    for ( r = 0; r < s.size(); r++)
    {
        if (s[r]<='9'&&s[r]>='0')
        {
            continue;
        }
        else
        {
            ret.push_back(s.substr(l,r));
            ret.push_back(s.substr(r,r+1));
            l = r+1;
        }
    }
    ret.push_back(s.substr(l,r));
    return ret;
}


// expr：算术表达式
// 返回值：加上括号后的表达式
string solve(string expr) {
    vector<string> sp = split(expr);
    queue<int> op;
    int size = sp.size();
    vector<node*> cache(size,nullptr);
    string ans = "";

    for (auto oper : vector<string>{"*","/","+","-"})
    {
        for (int i = 0; i < size; i++)
        {
            if (sp[i]==oper)
            {
                op.push(i);
            }
        }
    }

    while (!op.empty())
    {
        int pos = op.front();
        op.pop();
        node* l = cache[pos-1]?cache[pos-1]: new node(pos-1,pos-1,sp[pos-1]);
        node* r = cache[pos+1]?cache[pos+1]: new node(pos+1,pos+1,sp[pos+1]);
        ans = "("+l->val+sp[pos]+r->val+")";
        node* n = new node(l->l,r->r,ans);
        cache[n->l]=n;
        cache[n->r]=n;
    }

    return ans;
}

// 代码实现结束

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    cout << solve(s) << '\n';
    return 0;
}




/* 



 */