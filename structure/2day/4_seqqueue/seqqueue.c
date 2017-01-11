#include "seqqueue.h"

void init_seq_q(seq_p_q *q)
{
      *q=(seq_p_q)malloc(sizeof(seq_q));
      if(NULL==*q){
      
	    printf("Malloc failed~!\n");
	    exit(1);
      }
      (*q)->front=SIZE -1;
      (*q)->rear =SIZE -1; 
}

bool is_empty_seq_q(seq_p_q q)
{
      if(q->front == q->rear)
	    return true;
      else return false;
}

bool is_full_seq_q(seq_p_q q)
{
      if(q->front == ((q->rear+1)%SIZE))
	    return true;
      else return false;
}

bool in_queue(seq_p_q q,datatype x)
{
      if(is_full_seq_q(q)){
      	    printf("The queue is full!\n");
	    return false;
      }
      q->rear= (q->rear+1) % SIZE;
      q->data[q->rear]=x;
      return true;
}

bool out_queue(seq_p_q q,datatype *x)
{
      if(is_empty_seq_q(q)){
      
	    printf("The queue is empty!\n");
	    return false;
      }
      q->front=(q->front+1)%SIZE;
      *x = q->data[q->front];
      return true;
}

void show_queue(seq_p_q q)
{
      int i;
      for(i=(q->front+1)%SIZE;i<(q->rear+1)%SIZE;i=(i+1)%SIZE)
	    printf("%d\t",q->data[i]);


      printf("\n");
}
