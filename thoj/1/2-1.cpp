/* 
你有一个盒子，你可以往里面放数，也可以从里面取出数。

初始时，盒子是空的，你会依次做 Q 个操作，操作分为两类：

插入操作：询问盒子中是否存在数 x，如果不存在则把数 x 丢到盒子里。
删除操作：询问盒子中是否存在数 x，如果存在则取出 x。
对于每个操作，你需要输出是否成功插入或删除。
 */

#include <iostream>
#include <vector>
#include <unordered_set> //hash table
#include <set>          //平衡二叉树
#include <unordered_map>

static std::unordered_set<uint64_t> set;

void push(uint64_t var){
    if (set.find(var)!=set.end())
    {
        std::cout<<"Failed\n";
    }
    else
    {           
        set.emplace(var);
        std::cout<<"Succeeded\n";
    }
}

void pop(uint64_t var){
    if (set.find(var)!=set.end())
    {
        set.erase(var);
        std::cout<<"Succeeded\n";
    }
    else
    {
        std::cout<<"Failed\n";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    std::cin>>n;
    std::vector<std::pair<int,uint64_t>> oper(n);
    int op;
    uint64_t val;
    for (int i = 0; i < n; i++)
    {
        std::cin>>op>>val;
        oper[i]={op,val};
    }
    for (auto &&i : oper)
    {
        switch (i.first)
        {
        case 1:
            push(i.second);
            break;
        case 2:
            pop(i.second);
            break;
        }
    }
    
    return 0;
}
