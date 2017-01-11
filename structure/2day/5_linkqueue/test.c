#include "linkqueue.h"
int main(void)
{
      p_link_que q;
      init_link_q(&q);
      int num,ret,x;
      while(1){
      printf("Please input:");
      ret = scanf("%d",&num);
      	if(ret == 1){
	      in_linkqueue(q,num);
	      show_linkqueue(q);
      	}
	else{
	   if(out_linkqueue_2(q,&x))
		show_linkqueue(q);
	}
	getchar();
      }
      return 0;
} 
