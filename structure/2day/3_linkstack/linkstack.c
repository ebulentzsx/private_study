#include "linkstack.h"

p_linkstack creat_node_linkstack(void)
{
      p_linkstack p=NULL;
      p=(p_linkstack)malloc(sizeof(linkstack));
      if(NULL==p)
      {
	    printf("Malloc failde!\n");
	    exit(1);
      }
      return p;
}
void init_linkstack(p_linkstack *top)
{
      *top=NULL;
}
bool is_link_empty(p_linkstack top)
{
      if(top == NULL)
	    return true;
      else return false;
}
bool push_linkstack(p_linkstack *top,datatype x)
{
      p_linkstack new;
      new = creat_node_linkstack();
      new->next = (*top);
      (*top) = new;
      new->data=x;
      return true;
}

bool pop_linkstack(p_linkstack *top,datatype *x)
{ 

      if(is_link_empty((*top))){
      	printf("Stack is empty!\n");
	return false;
      }
      p_linkstack q;
      q = (*top);
      *x = q->data;
      *top = q->next;
      free(q);
      q=NULL;
      return true;
}
void show_link_stack(p_linkstack  top)
{
	while(top != NULL){
	printf("%d",top->data);
	top = top->next;
	}
	printf("\n");
}
