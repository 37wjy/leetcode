#include <iostream>
#include <vector>

// 代码实现开始
struct Node
{
    Node *pre = nullptr;
    Node *next = nullptr;
    int val;
    Node(){};
    Node(int val) : val(val){};
    Node(int val, Node *pre, Node *next) : val(val), pre(pre), next(next){};
} * arr;

int size = 0;
// Node *arr;

// 初始化函数，在操作开始前会调用一次
void init(int n)
{
    arr = new Node[n + 1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = Node(i);
    }
    size = n;
}

// x 是编号，范围为 1 到 n
// 若成功操作，返回 true，否则返回 false
bool split_succ(int x)
{
    if (arr[x].next == nullptr)
    {
        return false;
    }
    arr[x].next->pre = nullptr;
    arr[x].next = nullptr;
    return true;
}

// x 是编号，范围为 1 到 n
// 若成功操作，返回 true，否则返回 false
bool split_prev(int x)
{
    if (arr[x].pre == nullptr)
    {
        return false;
    }
    arr[x].pre->next = nullptr;
    arr[x].pre = nullptr;
    return true;
}

// x, y 是编号，范围为 1 到 n
// 若成功操作，返回 true，否则返回 false
bool link(int x, int y)
{
    if (arr[x].next != nullptr or arr[y].pre != nullptr)
    {
        return false;
    }
    arr[x].next = &arr[y];
    arr[y].pre = &arr[x];
    return true;
}

// x 是编号，范围为 1 到 n
// 返回遍历得到的序列
std::vector<int> visit_succ(int x)
{
    std::vector<int> ans;
    Node *node = &arr[x];
    do
    {
        ans.push_back(node->val);
        node = node->next;
    } while (node != nullptr and node->val != x);
    return ans;
}

// x 是编号，范围为 1 到 n
// 返回遍历得到的序列
std::vector<int> visit_prev(int x)
{
    std::vector<int> ans;
    Node *node = &arr[x];
    do
    {
        ans.push_back(node->val);
        node = node->pre;
    } while (node != nullptr and node->val != x);
    return ans;
}

// 代码实现结束

int main()
{
    std::ios::sync_with_stdio(false);
    int n, m, x, y;
    std::string op;
    std::cin >> n >> m;
    init(n);
    for (int i = 0; i < m; ++i)
    {
        std::cin >> op >> x;
        if (op == "split_succ")
        {
            std::cout << (split_succ(x) ? "yes" : "no") << '\n';
        }
        else if (op == "split_prev")
        {
            std::cout << (split_prev(x) ? "yes" : "no") << '\n';
        }
        else if (op == "link")
        {
            std::cin >> y;
            std::cout << (link(x, y) ? "yes" : "no") << '\n';
        }
        else if (op == "visit_succ")
        {
            std::vector<int> ans = visit_succ(x);
            for (int i = 0; i < ans.size(); i++)
            {
                std::cout << ans[i] << ' ';
            }
            std::cout << "\n";
        }
        else
        {
            std::vector<int> ans = visit_prev(x);
            for (int i = 0; i < ans.size(); i++)
            {
                std::cout << ans[i] << " ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}
