/*
    给定一个n个整数的序列以及一个非负整数d，请你输出这个序列中有多少个连续子序列（长度大于1），满足该子序列的最大值最小值之差不大于d。

    连续子序列：序列1 2 3中长度大于1的连续子序列有

    n ≤ 300000


    [考虑分治。]

    [令函数solve(l, r)表示统计[l, r]中合法的连续子序列个数，mid为(l+r)/2（下取整），那么]

    [solve(l, r) = 0, 当l = r]

    [solve(l, r) = solve(l, mid) + solve(mid + 1, r) + cal(l, r, mid)，当l≠r]

    [其中cal(l, r, mid)表示在左端点在区间[l, mid]中、右端点在区间[mid + 1, r]中的符合要求的连续子序列数目]

    [那么答案就是solve(1, n)。]

    [至于cal(l, r, mid)怎么算，大家可以仔细思考思考。（右端点是有单调性的）]

    [**注意答案要用long long**]

    [（另外这题也可以用线性的方法做哦~有兴趣去搜一搜单调队列，具体就是用两个单调队列分别维护最大值和最小值）]

 */

#include <vector>
#include <stdio.h>
#include <algorithm> 
using namespace std;

// ================= 代码实现开始 =================
const int N = 300005;

//n 数组长度 d为第二个输入量b
//max_value 用于存储solve函数中的前缀最大值
//min_value 用于存储solve函数中的前缀最小值
//a 数组a,长度为n

int n, d, max_value[N], min_value[N];
vector<int> a;

//分治计算区间[l,r]中，有多少个连续子序列满足最大值最小值之差不大于d
//l：区间左边界
//r：区间右边界
//返回值：满足条件的连续子序列的个数
long long solve(int l, int r){
    if(l==r)
        return 0;
    
    int mid = (l+r)>>1; //中点
    long long ans =   solve(l,mid) + solve(mid+1,r);//分治求出左右两半的值。
    
    //我们计算区间[mid+1，r]的前缀最小值和前缀最大值。
    //也就是说min_value[i] = min(a[mid+1...i])i,max_value同理
    for(int i = mid + 1; i <= r; ++i){
        min_value[i] = (i==mid+1) ? a[i]:min(min_value[i-1],a[i]);
        max_value[i] = (i==mid+1) ? a[i]:max(max_value[i-1],a[i]);
    }
    
    //我们倒序枚举子序列的左端点i，i的取值范围  在[i，mid]
    //pos表示若连续子序列的左端点是i，那么子序列的右端点最远能拓展到pos位置，当然pos取值范围在[mid+1,r],一开始初始化为r
    //mn是后缀最小值，mx是后缀最大值，也就是说mn=min([i...mid]),mx同理
    //那么在以i为左端点的连续子序列(右端点在[mid+1,r]内)个数应该有pos-mid个
    int mn = 0, mx = 0, pos = r;
 //   printf("mid= %d , pos= %d \n",mid ,pos);
    for(int i = mid; i >= l && pos > mid; --i){
        mn = (i==mid) ? a[i] : min(a[i],mn);
        mx = (i==mid) ? a[i] : max(a[i],mx);
 //       printf("i= %d , mn= %d , mx= %d \n",i,mn,mx);
        for(;pos>mid && max(mx,max_value[pos])-min(mn,min_value[pos])>d;--pos);
        ans+= pos-mid;
     }
    return ans;
}

// 求出有多少个a数组中的连续子序列（长度大于1），满足该子序列的最大值最小值之差不大于d
// n：a数组的长度
// d：所给d
// a：数组a，长度为n
// 返回值：满足条件的连续子序列的个数
long long getAnswer(int n, int d, vector<int> a) {
    //复制到全局变量
    ::n = n;
    ::d = d;
    ::a = a;
    return solve(0, n-1);
}

// ================= 代码实现结束 =================


int main() {
    int n, d;
    scanf("%d%d", &n, &d);
    vector<int> a;
    a.resize(n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("%lld\n", getAnswer(n, d, a));
    return 0;
}


