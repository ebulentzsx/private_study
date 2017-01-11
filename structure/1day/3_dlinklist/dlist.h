#ifndef __DLIST_H__
#define __DLIST_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int datatype; 
typedef struct dlist{
      datatype data;
      struct dlist *next,*prev;
}dl_node,*dl_pnode;

extern void show_dl(dl_pnode p);
extern dl_pnode creat_dlnode();
extern void init_dl(dl_pnode *h);
extern bool insert_dl(dl_pnode p,dl_pnode new,int j);
extern void del_dlnode(dl_pnode p);
extern void sort_dl(dl_pnode p);
extern void mysort(dl_pnode h);
#endif
