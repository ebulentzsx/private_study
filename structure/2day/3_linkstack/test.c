#include "linkstack.h"

int main(void)
{
      p_linkstack top;
      init_linkstack(&top);
      datatype num,i;
      printf("Please input an interger:");
      scanf("%d",&num);
      if(num<0)
	    i = -num;
      else i = num;
//      while((i/8 != 0) || (i%8 != 0) ){
  	while(i){
      push_linkstack(&top,i%8);
	i=i/8;
      }
	
      if(num<0)
	    printf("%d\t---> -0",num);
	else printf("%d\t---> 0",num);
  	
      show_link_stack(top);	
return 0;
}

