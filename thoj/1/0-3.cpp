//#include <bits/stdc++.h>
/*
    直方图中找最大面积区域

    可用线段树 构建：nlogn 存： n 取： nlogn

    栈  只存单调升序
*/
#include <stack>
#include <iostream>
using namespace std;

int getAnswer(int n, int *height)
{
    /* 请在这里设计你的算法，并将答案返回 */
    stack<int> h;
    int max_area = 0;
    int top;
    int area_with_top;

    int i = 0;

    for (int i = 0; i < n;)
    {
        if (h.empty() || height[h.top()] <= height[i])
        {
            h.push(i++);
        }
        else
        {
            top = h.top();
            h.pop();
            max_area = max(max_area, height[top] * (h.empty() ? i : i - h.top() -1));
        }
    }

    while (!h.empty())
    {
        top = h.top();
        h.pop();
        max_area = max(max_area, height[top] * (h.empty() ? i : i - h.top() -1));
    }
    return max_area;
}

int getAnswerOpt(int n, int *height)
{
    /* 请在这里设计你的算法，并将答案返回 */
    stack<int> h;
    h.push(0);
    int max_area = 0;
    int top;
    int area_with_top;

    int i = 1;

    for (; i < n;)
    {
        if (height[h.top()] <= height[i])
        {
            h.push(i++);
        }
        else
        {
            top = h.top();
            h.pop();
            max_area = max(max_area, height[top] * ( i - h.top() - 1));
        }
    }

    for (int j = 1; j < h.size(); j++)
    {
        top = h.top();
        h.pop();
        max_area = max(max_area, height[top] * ( i - h.top() - 1));
    }
    
    return max_area;
}

int main()
{
    int n;
    cin >> n;

    int *height = new int[n + 2]();

    
    for (int i = 1; i <= n; ++i)
        cin >> height[i];
    
    cout << getAnswerOpt(n+2, height) << endl;

    delete[] height;
    return 0;
}