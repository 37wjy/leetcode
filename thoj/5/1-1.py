#!/usr/bin/env pypy3
# -*- coding: utf-8 -*-

# ================= 代码实现开始 =================
class Pwo: # "Pwo"的意思是"Points with order"（有顺序的点）
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.i = 0 # 用i来代表顺序
# --------------小小分割线-------------------
def orientation(p, q, r):
    val = (q.y - p.y)*(r.x - q.x) - (r.y - q.y)*(q.x - p.x) # 用斜率比较
    a = 0 # 最终返回值是这个
    if val == 0: # 如果点1、2的斜率和点23、斜率相等
        a = 0 #那么a = 0，证明三点一线
    elif val > 0:
        a = 1 # 顺时针
    else:
        a = 2 # 逆时针

    return a
# --------------小小分割线-------------------
def convex(points, n):
    if n < 3: # 必须比三点多才可能有凸包
        return None

    hull = list() # 初始化一个空列表，返回值也是这个
    # 寻找最左的点
    leftmost = 0 #初始化一个点
    for i in range(n):
        if points[i].x < points[leftmost].x: # 如果有一个点比点0还要小
            leftmost = i # 那么第i个就是最左的点

    p = leftmost # p是上一个点
    q = 0 # 用在循环中
    while (3 > 1):
        hull.append(points[p]) #每次循环开始的时候，将点p装入列表hull中
        q = (p + 1) % n # q是任意点
        for j in range(n): # 遍历所有点，找凸包点:
            if orientation(points[p], points[j], points[q]) == 2: # 如果相对于p点是最逆时针旋转的
                q = j # 更新q值为j
        p = q # 用q值更新p值
        if p == leftmost: #如果转到原点了
            break #跳出循环

    return hull #将列表返回
# ================= 代码实现结束 =================
if __name__ == '__main__':
    n = int(input())
    a = [Pwo(0, 0) for i in range(n)]

    for i in range(n):
        a[i].x, a[i].y = map(int, input().split())
        a[i].i = i + 1

    h = convex(a, n)
    m = len(h)
    a = m
    for j in range(m):
        a *= h[j].i

    ans = a % (n + 1)
    print(ans)