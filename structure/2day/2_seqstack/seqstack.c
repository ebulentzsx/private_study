#include "seqstack.h"

void init_stack(p_stack *p)
{
      (*p)=(p_stack)malloc(sizeof(seqstack));
      if(NULL==(*p))
      {
	    printf("Malloc failde!\n");
	    exit(1);
      }
      (*p)->top =-1;
}

bool is_empty(p_stack p)
{
      if(p->top == -1)
	    return true;
      else return false;
}

bool is_full(p_stack p)
{
      if(p->top == (SIZE-1))
	    return true;
      else return false;
}

bool push_stack(p_stack p,datatype x)
{
      if(is_full(p)){
      	printf("Stack is full!\n");
	return false;
      }
      p->top ++;
      p->data[p->top]=x;
      return true;
}

bool pop_stack(p_stack p,datatype *x)
{ 
      if(is_empty(p)){
      	printf("Stack is empty!\n");
	return false;
      }
      *x=p->data[p->top];
      p->top --;
      return true;
}
void show_seq_stack(p_stack p)
{
	while(p->top >= 0){
	printf("%d",p->data[p->top]);
	p->top --;
	}
	printf("\n");
}
