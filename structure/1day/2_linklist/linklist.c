#include "linklist.h"

void init_linklist(list_pnode * H)
{
    *H =creat_node(); 
    (*H)->next = NULL;
}

void creat_linklist(list_pnode h)
{
    int n,i;
    list_pnode new,p;
    printf("请输入数据个数:");
    scanf("%d",&n);
    for(i = 0,p = h; i < n; i++){
	//申请新结点空间
	new = creat_node();
	//将数据存储在new指向的结点中
	scanf("%d",&new->data);
	//将新结点插入到链表中
    
	insert_linklist(p,new);
	p = p->next;	//p始终指向表尾
	show_linklist(h);
    }
}
list_pnode creat_node(void)
{
      list_pnode p;
	p = (list_pnode)malloc(sizeof(list_node));
	if(NULL ==p ){
	    printf("malloc failed!\n");
	    exit(1);
	}
	return p;

}

void insert_linklist(list_pnode p,list_pnode new)
{
    new->next = p->next;
    p->next = new;
}

void sort_linklist(list_pnode h)
{
      list_pnode p,q;
      p=h->next;
      h->next = NULL;
      while(p!=NULL){
      q=p;
      p=p->next;
      q->next = h->next;
      h->next =q;
      }

}

int searce_linklist(list_pnode p,typedata x)
{
      int i=;
	while(p->next != NULL)
	{
		if(p->data==x){
	        return i;
		printf("The value is the %dth number.\n");
		}
		else 	{		
		p=p->next;
		i++;
		}
	}	
	printf("Can not search the value:%d\n",x);
	return 0;
}
void show_linklist(list_pnode h)
{
    list_pnode p;
    for(p = h->next;p != NULL; p = p->next)
	printf("%d\t",p->data);
    printf("\n");
}
