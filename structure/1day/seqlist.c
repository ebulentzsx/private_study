#include "seqlist.h"


bool creat_list(seq_plist *p)
{
	*p = (seq_plist)malloc(sizeof(seq_list));
	if (*p == NULL)
	{
	      printf("Malloc failed~!\n");
	      return false;
	}
	(*p)->last = -1;
	return true;
}

bool clear_list(seq_plist p)
{
      if(p->last != -1){
        p->last =-1;
      }

        printf("List was cleared!\n");
	return true;
}

bool isempty_list(seq_plist p)
{
      if(p->last == -1)
	    return true;
      else return false;
}

bool isfull_list(seq_plist p)
{
      if(p->last == SIZE-1)
	    return true;
      else return false;
}

bool insert_list(seq_plist p,datatype x)
{
      int i,j;
      if(isfull_list(p)){
      printf("List is full! insert failed\n");
      return false;
      }
      for(i=0;i<=p->last;i++)
	    if(x<p->data[i])
		  break;
      for(j=p->last;j>=i;j--)
      	p->data[j+1]=p->data[j];
      p->data[i]=x;
      (p->last)++;
      return true;
}
bool del_list(seq_plist p,datatype x)
{
      int i,j;
      if(isempty_list(p))
      {
	    printf("List is empty! delete failed.\n");
	    return false;
      }
      for(i=0;i<=p->last;i++)
      	if(p->data[i]==x)
	      break;
      if (i > p->last){
      printf("Can not find the number:%d\n",x);
      return false;
      }
      for(j=i;j<p->last;j++)
	    p->data[j]=p->data[j+1];
      p->last--;
      return true;
}
bool show_list(seq_plist p)
{      int i;
      if(isempty_list(p))
	    return false;
      for(i=0;i<=p->last;i++)
	    printf("%d  ",p->data[i]);
      printf("\n");
      return true;
}
