#include "hash.h"

h_pt init_hash()
{
	h_pt new;
	new =(h_pt)malloc(sizeof(h_t));
	if (NULL == new){
		printf("Malloc failed!\n");
		exit(1);	      
	}
	return new;
}
h_p_link init_link_hash(void)
{
	h_p_link new;
	new = (h_p_link)malloc(sizeof(h_link)); 
	if (NULL == new)
	{
	      printf("Malloc  failed!\n");
	      exit(1);
	}
	return new;
}
h_p_link creat_link_hash(datatype a[],int n)
{
      int p,i,j;
      h_p_link h;
      h_pnode new;
      h = init_link_hash();
      h->lh_len = (int)(n/0.75)+1;
      p = get_p(h->lh_len);
     // printf("n=%d-------p=%d-----\n",n,p);
      h->lh_rcd = (h_pnode * )malloc(sizeof(h_pnode)*h->lh_len);
      if(h->lh_rcd == NULL){
	  printf("Malloc failed!\n");
	  exit(1);
      }
      
      for(i = 0;i<n;i++){
      	new =(h_node *) malloc(sizeof(h_node));
	new->data = a [i];
	j =a[i]%p;
//	printf("j=%d----a[%d]=%d --- p=%d----\n",j,i,a[i],p);
	new->next=h->lh_rcd[j];
	h->lh_rcd[j]=new;
      } 
      return h;

}


h_pt creat_hash(datatype a[],int n)
{

    int p,i,j;
    h_pt h;
    h = init_hash();
    h->h_len = (int)(n/0.75)+1;
    h->h_rcd = (datatype *)malloc(sizeof(datatype)*h->h_len);
    if(h->h_rcd == NULL){
	  printf("Malloc failed!\n");
	  exit(1);
    }
    for(i=0;i<h->h_len;i++)
	  h->h_rcd[i]=-1;
    p = get_p(h->h_len);
    for(i=0;i<n;i++)
    {
	  j=a[i]%p;
	  while (h->h_rcd[j]!=-1)
		j=(j+1)%h->h_len;
	  h->h_rcd[j]=a[i];
    }
    return h;
}

int get_p(int m)
{
      int i,j;
      for(j=m;j>1;j--){
	    for(i=2;i<j;i++)
		  if(j%i==0)
			break;
	    if(i==j)
			return j;
      }
      return -1;
}

void show_hash(h_pt h)
{

      printf("Using open address:-------\n");
      int i;
      for(i=0;i<h->h_len;i++)
	    printf("hash[%2d]=%2d\n",i,h->h_rcd[i]);
      printf("*********************************\n");

}

void show_link_hash(h_p_link h)
{
      printf("Using link address:-------\n");
      int i;
      h_pnode p;
      for(i=0;i<h->lh_len;i++)
      {
	p = h->lh_rcd[i];
	printf("Hash[%2d] = ",i);
	if(p==NULL)
	      printf("--->NULL");
        while(p != NULL){
	       
      		printf("--->%2d",p->data);
		p = p->next;
	}
	printf("\n");

      }
      printf("***********************************\n");
}
datatype hash_search(h_pt h,datatype key)
{
	int p,j;
	p= get_p(h->h_len);
	j=key%p;
	while(h->h_rcd[j] != key){
		j = (j+1)%h->h_len;
		if (h->h_rcd[j]==-1)
		{
		      printf("The key(%d) searched failed!\n",key);
	      		return -1;	      
		}
	}
	printf("The key(%d) was found in position %d.\n",key,j);
	return j;
}


h_pnode hash_link_search(h_p_link h,datatype key)
{
      int p,j;
      h_pnode t;
      p= get_p(h->lh_len);
      j = key%p;
      t = h->lh_rcd[j];
      while(t != NULL)
	    if(t->data == key)
	    {
		printf("The key(%d) was found in address: %d.\n",key,j);
		return t;
	    }
      	    else t=t->next;
	printf("The key(%d) searched failed!\n",key);
     	return NULL;
}
