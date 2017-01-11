#include <stdio.h>
#define N 8
int main(void)
{


      int a[N]={45,98,32,47,12,68,91,37};
      show_intarr(a);

}

void show_intarr(int *a)
{
      int i;
      for (i=0;i<N;i++)
	    printf("%d  ",*(a+i));
      printf("\n");

}

int seq_search(int a[],int n,int key)
{
      int i,ret;
      for (i=0;i<n;i++){
      	if(a[i]==key)
	      break;
      }
      ret = i;
}
