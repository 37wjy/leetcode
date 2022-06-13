#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    // lambda 捕获所有
    auto add = [=] 
    {
        return a + b;
    };
    std::cout << a+b;
    return 0;
}