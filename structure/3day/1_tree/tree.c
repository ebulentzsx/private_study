#include "tree.h"
#include "seqqueue.h"
#include "linkstack.h"
p_t_node creat_t_node (void)
{
	p_t_node new;
	new = (p_t_node)malloc(sizeof(t_node));
	if (NULL==new){
		printf("Malloc failed ! \n");
		exit(1);
	}
	return new;
}

void init_t_node(p_t_node *new)
{
      *new = creat_t_node();
      (*new)->lchild = NULL;
      (*new)->rchild = NULL;
      (*new)->data = 0;
}
#if 0
void add_tree(p_t_node root,datatype_tree x)
{
	if(root->data == NULL)
	      root->data = x;
	else if(root->lchild == NULL){
		init_t_node(&root->lchild);
		make_tree(root->lchild,x);
	}
	else if(root->rchild == NULL){
		init_t_node(&root->rchild);
		make_tree(root->rchild,x);
	}
	else {

	      if(i=1)
	}

}
#else

int make_tree(p_t_node *root)
{
        datatype_tree x;
	scanf("%c",&x);
	if(x == '#'||x == '\n')
	    return 0;
	else{
	      init_t_node(root);
	      //root = creat_t_node();
	      (*root)->data = x;
	      make_tree(&(*root)->lchild);
	      make_tree(&(*root)->rchild);
	}
	return 1;

}

#endif

void pre_order(p_t_node p)
{
      if(p!=NULL)
      {
       printf("%c  ",p->data );
      pre_order(p->lchild);
      pre_order(p->rchild);
      }
}

void mid_order(p_t_node p)
{
      if(p!=NULL){
      mid_order(p->lchild);
      printf("%c  ",p->data );
      mid_order(p->rchild);}
}
void post_order(p_t_node p)
{
      if(p!=NULL){
      post_order(p->lchild);
      post_order(p->rchild);
      printf("%c  ",p->data );}
}

void level_order(p_t_node p)
{
	p_t_node t;
	t = p;
	seq_p_q que;
	init_seq_q(&que);
	while(1){
	if(t!=NULL)
	      printf("%c  ",t->data);
	if(t->lchild!=NULL)
	      in_queue(que,t->lchild);
	if(t->rchild!=NULL)
	      in_queue(que,t->rchild);
	if(!is_empty_seq_q(que))
      	      out_queue(que,&t);	      
	else break;
	}
}

void linkstack_prev_order(p_t_node p)
      
{
        p_linkstack tmp;
	init_linkstack(&tmp);
	p_t_node t;
	t=p;
	while (t != NULL || !is_link_empty(tmp)){
	
	      if(t!=NULL){
		printf("%c  ",t->data);
		if(t->rchild!=NULL)
		      push_linkstack(&tmp,t->rchild);
		t = t->lchild;
	      }
	      else pop_linkstack(&tmp,&t);
	}
}
void linkstack_post_order(p_t_node p)
      
{
        p_linkstack tmp;
	init_linkstack(&tmp);
	p_t_node t,x;
	t=p;
	while(t!=NULL){
	
	      if((t->lchild != NULL) && (t->rchild != NULL) ){
 		    push_linkstack(&tmp,t);
 		    push_linkstack(&tmp,t->rchild);
		    t=t->lchild;
	       }
	      else if((t->lchild == NULL) && (t->rchild!=NULL)){
 		    push_linkstack(&tmp,t);
		    t=t->rchild;
	      }
	      else if((t->rchild == NULL)&&(t->lchild!=NULL)){
 		    push_linkstack(&tmp,t);
		    t=t->lchild;
	      }
	      else {
		    printf("%c  ",t->data);
		    while(!is_link_empty(tmp)){
		    pop_linkstack(&tmp,&x);
	    	    if((x->lchild==t) || (x->rchild ==t))
	      	    	{
				printf("%c  ",x->data);
				t=x;
			}
		    	else {
			  t=x;
			  break;
		    	}
			  
	  	    if(x==p) t=NULL;	    

	            }
	      }
	}
}
