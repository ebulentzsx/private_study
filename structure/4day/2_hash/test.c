#include "hash.h"

int main(void)
{
      datatype x;
      char ch;
      int a[N]={23,34,94,38,46,16,68,15,77,31,26,89,12,8,37};
      h_pt g;
      h_p_link h;
     g = creat_hash(a,N);
      show_hash(g);
      h = creat_link_hash(a,N);
      show_link_hash(h);
      while(1){
     printf("Please input an key to search:");
     scanf("%d",&x);
      hash_link_search(h,x);
      while(getchar()!='\n');
      printf("Press 'Y'/'y' to continue,or anykey else to quit.\n");
      scanf("%c",&ch);
    if ((ch != 'Y') && (ch != 'y'))
	  break;
     }
      return 0;

}
