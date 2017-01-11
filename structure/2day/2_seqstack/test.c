#include "seqstack.h"

int main(void)
{
      p_stack s;
      init_stack(&s);
      datatype num,i;
      printf("Please input an interger:");
      scanf("%d",&num);
      if(num<0)
	    i = -num;
      else i = num;
      while((i/8 != 0) || (i%8 != 0) ){
      	push_stack(s,i%8);
	i=i/8;
      }
	
      if(num<0)
	    printf("%d\t---> -0",num);
	else printf("%d\t---> 0",num);
  	
      show_seq_stack(s);	
return 0;
}

