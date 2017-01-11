#ifndef __SEQSTACK_H__
#define __SEQSTACK_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef int datatype;
#define SIZE 20
typedef struct seqStack{
	datatype data[SIZE];
	int top;
}seqstack,*p_stack;


extern void init_stack(p_stack *p);
extern bool is_empty(p_stack p);
extern bool is_full(p_stack p);
extern bool push_stack(p_stack p,datatype x);
extern bool pop_stack(p_stack p,datatype *x);
extern void show_seq_stack(p_stack p);









#endif
