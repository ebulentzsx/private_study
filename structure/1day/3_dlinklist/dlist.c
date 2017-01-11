#include "dlist.h"

dl_pnode creat_dlnode()
{
      dl_pnode p;
      p=(dl_pnode)malloc(sizeof(dl_node));
      if(NULL == p)
      {
	    printf("Malloc failed~!\n");
	    exit(1);
      }
      else return p;
}

void init_dl(dl_pnode *h)
{
      *h = creat_dlnode();
      (*h)->next=(*h);
      (*h)->prev=(*h);
}

bool insert_dl(dl_pnode p,dl_pnode new,int j)
//  if i=0,insert in front
//  if i=1,insert in back
{
      if((j!=1) && (j!=0))
	   {
		 printf("Insert Error!\n");
		 return false;
	   }
      if(j == 1){
      new->next = p->next;
      new->prev = p;
      p->next = new;
      new->next->prev =new;
      }
      if(j==0){
      new->next = p;
      new->prev = p->prev;
      p->prev=new;
      new->prev->next=new;
      }
	return true;
}

void del_dlnode(dl_pnode p)
{
      p->prev->next=p->next;
      p->next->prev=p->prev;
      // free(p);
      //p=Null;
}

void sort_dl(dl_pnode h)
{
	dl_pnode p,q;
	p=h->prev;
	while (p != h){
	if(p->data % 2 ==0 ){
		q=p;
		p=p->prev;
		del_dlnode(q);
		insert_dl(h,q,0);
	}
	else p = p->prev;
	}
}
void mysort(dl_pnode h)
{
      dl_pnode p,q,j;
      p=h->next;
      h->next = h;
      h->prev = h;
      while(p != h){
	j=h;
      	q=p;
	p=p->next;
	if(q->data % 2 == 0){
	      while((q->data < j->data)&&j->data%2==0)
		    j=j->prev;
	      insert_dl(j,q,0);
	}
	if(q->data % 2 == 1){
	      while((q->data < j->data)&&(j->data%2==1))
		    j=j->next;
	      insert_dl(j,q,1);
	}
	
      }

}
void show_dl(dl_pnode h)
{     dl_pnode p;
      p=h;
      p=p->next;
      while(p != h){
      printf("%d  ",p->data);
      p=p->next;
      }
      printf("\n");
}
