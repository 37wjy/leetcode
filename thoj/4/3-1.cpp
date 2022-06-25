#include <bits/stdc++.h>
using namespace std;

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */

uint32_t nextInt(uint32_t x){
	x^=x<<13;
	x^=x>>17;
	x^=x<<5;
	return x;
}
void initData(vector<uint32_t> &a,int n,int k,uint32_t seed){
	for (int i=0;i<n;++i){
		seed=nextInt(seed);
		a[i]=seed>>(32-k);
	}
}

// 本函数求解质数或邓老师数（将这两个功能合并在了一起）
// n, k：意义均与题目描述相符
// 返回值：如果 k=0，则将所求的质数按从小到大的顺序放入返回值中；如果 k=1，则将所求的邓老师数按从小到大的顺序放入返回值中。
vector<int> getAnswer(int n, int k, uint32_t seed) {
    /* 请在这里设计你的算法 */
    vector<uint32_t> vec(n);
    initData(vec, n, k, seed);
    return {1,2,3};
}

typedef uint32_t u32;
const int N = 67108864;
u32 a[N+1];
u32 l[N+1],r[N+1];
uint32_t maxGap(int n, int k) {
    // 初始化
    // 确定桶的个数
    // 值域是2^32
    // 因为N是2^26，所以桶的数量就用26表示
    // 桶的个数
    // 所以每一段的长度是2^6
    const int m =1 << 26;
    // 将l中的所有位置赋值为-1,l是最小值
    memset(l,-1,sizeof(int)*m);
    // 将r中的所有位置赋值为-1,r是最大值
    memset(r,-1,sizeof(int)*m);
    
    // 这是一个参数，辅助后续用位运算代替除法
    // 保证它非负的情况下减去26
    const int _k = max(k-26,0);
    
    for(int i =0; i<n;++i){
        // 这个式子等价于a[i]除以2的_k次幂，求出a[i]所在的桶
        uint32_t bl = a[i] >> _k;
        // 更新对应桶的l,r
        if(l[bl] == -1)
            l[bl] = r[bl] = a[i];
        else if(a[i]<l[bl])
            l[bl] = a[i];
        else if(a[i]>r[bl])
            r[bl] = a[i];
    }
    // 统计答案
    uint32_t last = a[0];
    uint32_t ans =0;
    for(int i = 0;i<m;++i)
        // 判断桶是否非空
        if(l[i] != -1){
            // 修正last
            // last是前面的最大值
            if(last>l[i])
                last = l[i];
            // 更新最大间隙
            if(l[i] - last >ans)
                ans = l[i] - last;
            last = r[i];
        }
    return ans;
}

// ================= 代码实现结束 =================

int main() {
    int n, k;
    uint32_t seed;
    scanf("%d%d%d", &n, &k, &seed);
    vector<int> ans = getAnswer(n, k, seed);
    for (vector<int>::iterator it = ans.begin(); it != ans.end(); ++it)
        printf("%d\n", *it);
    return 0;
}
