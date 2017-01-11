#include "seqqueue.h"
int main(void)
{
      seq_p_q q;
      init_seq_q(&q);
      int num,ret,x;
      while(1){
      printf("Please input:");
      ret = scanf("%d",&num);
      	if(ret == 1){
	      in_queue(q,num);
	      show_queue(q);
      	}
	else{
	   if(out_queue(q,&x))
		show_queue(q);
	}
	getchar();
      }
      return 0;
}
