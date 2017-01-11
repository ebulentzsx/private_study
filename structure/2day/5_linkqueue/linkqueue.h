#ifndef __LINKQUEUE_H__
#define __LINKQUEUE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int datatype;
typedef struct node{
	datatype data;
	struct node *next;
}linklist;

typedef struct linkqueue {
	linklist *front, *rear;
}link_que,*p_link_que;


extern void init_link_q(p_link_que *q);
extern bool is_empty_link_q(p_link_que q);
//extern bool in_linkqueue(p_link_que q,datatype x);
extern bool in_linkqueue(p_link_que q,datatype x);
extern bool out_linkqueue(p_link_que q,datatype *x);
extern bool out_linkqueue_2(p_link_que q,datatype *x);
extern void show_linkqueue(p_link_que q);


#endif
