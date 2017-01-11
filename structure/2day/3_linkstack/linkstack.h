#ifndef __LINKSTACK_H__
#define __LINKSTACK_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int datatype;
typedef struct linkstack{
	datatype data;
	struct linkstack *next;
}linkstack,*p_linkstack;


extern p_linkstack creat_node_linkstack(void);
extern void init_linkstack(p_linkstack *p);
extern bool is_link_empty(p_linkstack p);
extern bool push_linkstack(p_linkstack *p,datatype x);
extern bool pop_linkstack(p_linkstack *p,datatype *x);
extern void show_link_stack(p_linkstack p);









#endif
