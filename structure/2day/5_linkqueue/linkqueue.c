#include "linkqueue.h"

void init_link_q(p_link_que *q)
{
      *q = (p_link_que)malloc(sizeof(link_que));
      if(NULL==*q){
      
	    printf("Malloc failed~!\n");
	    exit(1);
      }
      
     (*q)->rear=(linklist *)malloc(sizeof(linklist)); 
     if(NULL == (*q)->rear){
     		   printf("Malloc failed~!\n");\
	   exit(1);
     }
     (*q)->front=(*q)->rear;
     (*q)->front->next = NULL;
}

bool is_empty_link_q(p_link_que q)
{
      if(q->front == q->rear)
	    return true;
      else return false;
}


bool in_linkqueue(p_link_que q,datatype x)
{
      linklist *new;
      new = (linklist *)malloc(sizeof(linklist));
      if(new ==NULL ){
      printf("Malloc failed!\n");
      exit(1);
      }
      q->rear->next = new ;
      q->rear = new ;
      new->data = x;
      new->next = NULL;
      return true;
}

bool out_linkqueue(p_link_que q,datatype *x)
{
      if(is_empty_link_q(q)){
      
	    printf("The queue is empty!\n");
	    return false;
      }
      linklist *p;
      p = q->front->next;
      q->front->next = p->next;
      *x = p -> data;
      	if(p == q->rear)
	      q->rear = q->front;
      free(p);
      p=NULL;
      return true;
}
bool out_linkqueue_2(p_link_que q,datatype *x)
{
      if(is_empty_link_q(q)){
      
	    printf("The queue is empty!\n");
	    return false;
      }
      linklist *p;
      p = q->front;
      q->front = p->next;
      *x = q ->front-> data;
      free(p);
      p=NULL;
      return true;
}

void show_linkqueue(p_link_que q)

{
        linklist *p;
      	p = q->front;
	while(p!=q->rear){

	      p=p->next;
	      printf("%d\t",p->data);
			
	}
      printf("\n");
}
