#include "seqlist.h"

int main(void)
{
      int c;
      seq_plist p;
      creat_list(&p);
      while(1){

	    printf("Please input an interger:");
      if(scanf("%d",&c)==0)
	    break;
      else if(c>0){
	    insert_list(p,c);
	    show_list(p);
      }
      else if(c<0){
      	    del_list(p,-c);
            show_list(p);
      }
      }

      return 0;
}
