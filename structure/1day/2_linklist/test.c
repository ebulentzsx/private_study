/*
   2、用单向链表实现数据逆转，首先建立一个包含若干整数的单向链表，然后参考讲义的例子实现数据的逆转。（比如说把1，2，3，4，5逆转成5，4，3，2，1）
 */
#include "linklist.h"

int main(void)
{
    list_pnode head;
    
    init_linklist(&head);  //初始化链表
    creat_linklist(head);   //创建有若干个整数的链表
    sort_linklist(head);   //将链表中的数据逆转
    show_linklist(head);
    return 0;
}
