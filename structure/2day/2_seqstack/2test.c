#include "seqstack.h"

int main(void)
{
      p_stack s;
      init_stack(&s);
      datatype num,i;
      printf("Please input an interger:");
      for(i=0;i<SIZE;i++){
      
	    while(scanf("%d",&num)!=1);
	    push_stack(s,num);
      
      }
	
  	
      show_seq_stack(s);	
return 0;
}

