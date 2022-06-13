/*
给定一个 1 到 n 的排列（即一个序列，其中 [1,n] 之间的正整数每个都出现了恰好 1 次）。

你可以花 1 元钱交换两个相邻的数。

现在，你希望把它们升序排序。求你完成这个目标最少需要花费多少元钱。
 */
//#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
#include <iostream>

#define ll long long
using namespace std;

// 这个函数的功能是计算答案（即最少花费的金钱）
// n：表示序列长度
// a：存储整个序列 a
// 返回值：最少花费的金钱（需要注意，返回值的类型为 64 位有符号整数）
ll cnt=0,n;
int a[200005], tmpA[200005];
 
void merge_sort(int l, int r, int *A) {
	if (l >= r) return ;
	int mid = (l + r) >> 1;
	merge_sort(l, mid, A);
	merge_sort(mid + 1, r, A);
	int pl = l, pr = mid + 1, tmpp = 0;
	while(pl <= mid && pr <= r) {
		if (A[pl] <= A[pr]) tmpA[tmpp++] = A[pl++];
		else tmpA[tmpp++] = A[pr++], cnt += mid - pl + 1;
	}
	while(pl <= mid) tmpA[tmpp++] = A[pl++];
	while(pr <= r) tmpA[tmpp++] = A[pr++];
	for (int i = 0; i < tmpp; i++) A[i + l] = tmpA[i];
} 

// ================= 代码实现结束 =================

int main() {
	cin>>n;
	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
	merge_sort(1, n, a);
	cout<<cnt<<'\n';
	return 0;
}
