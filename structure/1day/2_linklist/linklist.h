#ifndef __LINKLIST_H__
#define __LINKLIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int datatype;
typedef struct list_node{
    datatype data;
    struct list_node *next;
}list_node,*list_pnode;
extern list_pnode creat_node(void);
extern void init_linklist(list_pnode * H);
extern void creat_linklist(list_pnode h);
extern void insert_linklist(list_pnode p,list_pnode new);
extern void sort_linklist(list_pnode h);
extern void show_linklist(list_pnode h);
#endif
