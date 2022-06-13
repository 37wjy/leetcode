/*
    按顺序依次插入到一棵二叉排序树中
    二叉树 返回前序 后序遍历
 */

//#include <bits/stdc++.h>
#include <vector>
#include "stdio.h"
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
static int pos;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
}node;

void insert(TreeNode* root, int val)
{
    if (val < root->val)
    {
        if (root->left)
        {
            insert(root->left, val);
        }
        else
        {
            root->left=new TreeNode(val);
        }
    }
    else
    {   
        if (root->right)
        {
            insert(root->right, val);
        }
        else
        {
            root->right=new TreeNode(val);
        }
    }
}


void forward(TreeNode *root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    ans[pos++] = root->val;
    forward(root->left, ans);
    forward(root->right, ans);
}

void backward(TreeNode *root, vector<int> &ans)
{
    if (root == nullptr)
        return;
    backward(root->left, ans);
    backward(root->right, ans);
    ans[pos++] = root->val;
}

// 给定一个1到n的排列，依次插入到二叉树中，返回前序遍历和后序遍历
// n：如题意
// sequence：给定的排列，大小为n
// 返回值：将要输出的元素依次加入到返回值中
vector<int> getAnswer(int n, vector<int> &sequence)
{
    /* 请在这里设计你的算法 */
    vector<int> ans(n * 2);
    TreeNode* root=new TreeNode(sequence[0]);
    for (int i = 1; i < sequence.size(); i++)
    {
        insert(root, sequence[i]);
    }
    pos = 0;
    forward(root, ans);
    backward(root, ans);
    return ans;
}

// ================= 代码实现结束 =================

int main()
{
    int n;
    scanf("%d", &n);
    vector<int> sequence(n);
    for (int i = 0; i < n; ++i)
    {
        int x;
        scanf("%d", &x);
        sequence[i] = x;
    }
    vector<int> ans = getAnswer(n, sequence);
    for (int i = 0; i < n; ++i)
        printf("%d%c", ans[i], " \n"[i == n - 1]);
    for (int i = 0; i < n; ++i)
        printf("%d%c", ans[n + i], " \n"[i == n - 1]);
    return 0;
}

/*
       2
    1       6
         3      9
           5  7    10
          4    8


根左右
左右根

2 1 6 3 5 4 9 7 8 10
1 4 5 3 8 7 10 9 6 2 */