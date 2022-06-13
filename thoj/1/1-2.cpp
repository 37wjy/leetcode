/* 
队列

若为数字1，则接下来有一串字符串X，表示将X加入队列。
若为数字2，表示出列（保证队列非空），并输出出列的这个人。
若为数字3，则接下来有一个整数Y，表示询问队列中位置Y是谁（保证位置Y合法），并输出名字。

 */

#include "stdio.h"
#include <string>
using namespace std;

// ================= 代码实现开始 =================
void relenghtq(std::string* ptr,int ol, int nl);

/* 请在这里定义你需要的全局变量 */
static int lenght=4;
static int l=0,r=0;
static std::string* queue = new std::string[lenght]();

// 队尾入队
// name：入队人的姓名
void enqueue(string name) {
    /* 请在这里设计你的算法 */
    int new_r=(r+1)%lenght;
    /*     if (new_r==l)
    {
        relenghtq(queue,lenght,lenght*2);
    } */
    queue[r] = name;
    r=new_r;
}

// 队首出队
// 返回值：队首的姓名
string dequeue() {
    /* 请在这里设计你的算法 */
    if (l<lenght)
    {
        return queue[l++];
    }
    l=1;
    return queue[0]; 
}

// 询问队列中某个位置上的人的姓名（队首位置为1，往后位置依次递增）
// pos：询问的位置
// 返回值：pos位置上人的姓名
string query(int pos) {
    /* 请在这里设计你的算法 */
    return queue[(pos+l-1)%lenght];
}

void relenghtq(std::string* ptr,int ol, int nl){
    std::string *tmp = new std::string[nl]();
    int diff = nl-ol;
    for (int j = l; j < ol; j++)
    {    
        tmp[j+diff] = ptr[j];
    }
    if (r>=l)
    {
        r+=diff;
    }
    l+=diff;
    lenght=nl;
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
            enqueue(name);
        } else if (op == 2) {
            printf("%s\n", dequeue().c_str());
        } else {
            int pos;
            scanf("%d", &pos);
            printf("%s\n", query(pos).c_str());
        }
    }
    return 0;
}
