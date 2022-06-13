/* 
描述
实现一个栈，完成以下功能：

1.入栈
2.出栈
3.询问栈中位置Y是谁
一开始栈为空。栈中的位置从1开始（即栈底位置为1）。

*/

//#include <bits/stdc++.h>
#include "stdio.h"
#include <string>

// ================= 代码实现开始 =================

/* 请在这里定义你需要的全局变量 */
static int deep = 512;
static int size = 0;

static std::string* stack = new std::string[deep]();

// 压入栈顶
// name：被压入的人的姓名
void push(std::string name) {
    /* 请在这里设计你的算法 */
    size++;
    if (size>=deep)
    {
        deep+=16;
        resize(stack);
    }
    stack[size] = name;
}

// 弹出栈顶
// 返回值：被弹出人的姓名
std::string pop() {
    /* 请在这里设计你的算法 */
    if (size>=1)
    {
        return stack[size--];
    }
    return "";
}

// 询问栈中某个位置上的人的姓名（栈底位置为1，向栈顶方向的位置依次递增）
// pos：询问的位置
// 返回值：pos位置上人的姓名
std::string query(int pos) {
    /* 请在这里设计你的算法 */
    return stack[pos];
}

void resize(std::string* ptr){
    std::string *tmp = new std::string[deep];
    for (int j = 0; j < size; j++)
    {    
        tmp[j] = ptr[j];
    }
    delete[]ptr;
    ptr = tmp;
}

// ================= 代码实现结束 =================

int main() {
    int n;
    scanf("%d", &n);
    char name[20];
    for (; n--; ) {
        int op;
        scanf("%d", &op);
        if (op == 1) {
            scanf("%s", name);
            push(name);
        } else if (op == 2) {
            printf("%s\n", pop().c_str());
        } else {
            int pos;
            scanf("%d", &pos);
            printf("%s\n", query(pos).c_str());
        }
    }
    return 0;
}
