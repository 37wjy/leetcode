#include <iostream>
#include <vector>
using namespace std;

// 代码实现开始
int mode(int val){
    return 1;
}

// 计算一组数据的答案，即 a^b 的后三位
// a: 如题目所述
// b: 如题目所述
// 返回值：a^b 的后三位
int solve(int a, int b) {
    /* 实现你的算法 */
    long long ans = 1;
    long long pow = a%1000;
    while (b>0)
    {
        if (b&1)
        {
            ans=(ans*pow)%1000;
        }
        pow=(pow*pow)%1000;
        b>>=1;
    }
    return ans;
}

// 代码实现结束

int main() {
    ios::sync_with_stdio(false);
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i) {
        int a, b;
        cin >> a >> b;
        cout << solve(a, b) << '\n';
    }
    return 0;
}
