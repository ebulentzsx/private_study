#include "dlist.h"
int main(void)
{
      int n,i;
      dl_pnode head,p;
      init_dl(&head);
      printf("Please input an interger:\n");
      while(scanf("%d",&n)==0)
	   printf("Input error!\n") ; 
      for(i=0;i<n;i++)
      {
	    p = creat_dlnode();
	  //  printf("Please input an interger:");
	  //  scanf("%d",&(p->data));
	    p->data =i+1;
	    insert_dl(head,p,0);
      }
      show_dl(head);
//      mysort(head);
      sort_dl(head);
      show_dl(head);
      return 0;
}
