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
      INIT_LIST_HEAD(&(*h)->kl_node);
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
      	list_add(&new->kl_node,&p->kl_node);
      }
      if(j==0){
	list_add_tail(&new->kl_node,&p->kl_node);
      }
	return true;
}

//void del_dlnode(dl_pnode p)
//{

      //p->prev->next=p->next;
      //p->next->prev=p->prev;
      // free(p);
      //p=Null;
//}

void sort_dl(dl_pnode h)
{
	dl_pnode p,q;
	p=list_entry(h->kl_node.prev,dl_node,kl_node);
	while (p != h){
	      printf("p=%p-----h=%p\n",p,h);
	if(p->data % 2 ==0 ){
		q=p;
		p=list_entry(p->kl_node.prev,dl_node,kl_node);
		list_del(&q->kl_node);	
		insert_dl(h,q,0);
	}
	else 
		p=list_entry(p->kl_node.prev,dl_node,kl_node);
	}
}
void show_dl(dl_pnode h)
{     dl_pnode p;
      p=h;
      list_for_each_entry(p,&h->kl_node,kl_node)
      	printf("%d  ",p->data);
      printf("\n");
}
