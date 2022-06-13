//#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

/*
第一行一个数 n，表示序列长度。

第二行 n 个用空格隔开的正整数，描述序列中的每一个元素。保证这些元素都不会超过 10^9。

第三行一个正整数 Q，表示询问个数。

接下来 Q 行，每行一个正整数 x，描述一个询问。
 */

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

int bs(int key, vector<int> &arr)
{
    int left = 0, right = arr.size() - 1, mid = 0;
    if (key > arr[right] || key < arr[left])
    {
        return -1;
    }
    while (left < right)
    {
        mid = (left + right) >> 1;
        if (arr[mid] < key)
        {
            left = mid + 1;
        }
        else if (arr[mid] >= key)
        {
            right = mid - 1;
        }
    }
    return left;
}

// 本函数传入数组 a 及所有询问，你需要求解所有询问并一并返回
// n：序列 a 的长度
// a：存储了序列 a
// Q：询问个数
// query：依次存储了所有询问的参数 x
// 返回值：一个 vector<int>，依次存放各询问的答案
vector<int> getAnswer(int n, vector<int> &a, int Q, vector<int> &query)
{
    /* 请在这里设计你的算法 */
    vector<int> ans; //声明返回值ans 
    ans.clear(); //清空ans 
    sort(a.begin(),a.end());//由于要进行二分查找，需要保证a有序，因此将a排序 
    for(int i = 0; i < Q; ++i){ 
        int key = query[i]; //key为本次询问的x 
        //进行二分查找 
        int l = -1,r = n,mid;
        while(l+1 < r){
            mid = (l+r)>>1;
            if(a[mid] < key)
                l = mid;
            else
                r = mid;
        }
        int pos = r;
        if(pos >= n)
            ans.push_back(-1);
        else
            ans.push_back(a[pos]);
    }
    return ans;
}

// ================= 代码实现结束 =================

int main()
{
    int n, Q, tmp;
    vector<int> a, query;
    a.clear();
    query.clear();
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &tmp);
        a.push_back(tmp);
    }
    scanf("%d", &Q);
    for (int i = 0; i < Q; ++i)
    {
        scanf("%d", &tmp);
        query.push_back(tmp);
    }
    vector<int> ans = getAnswer(n, a, Q, query);
    for (int i = 0; i < Q; ++i)
        printf("%d\n", ans[i]);
    return 0;
}
