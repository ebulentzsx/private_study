#ifndef __TREE_H__
#define __TREE_H__
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//#include "seqqueue.h"
//#include "linkstack.h"
typedef char datatype_tree;
typedef struct tree_node{
	datatype_tree data;
	struct tree_node *lchild;
	struct tree_node *rchild;
}t_node,*p_t_node;


extern p_t_node creat_t_node (void);
extern void init_t_node(p_t_node *new);
extern int make_tree(p_t_node *root);
extern void pre_order(p_t_node p);
extern void mid_order(p_t_node p);
extern void post_order(p_t_node p);
extern void level_order(p_t_node p);
extern void linkstack_prev_order(p_t_node p);
extern void linkstack_post_order(p_t_node p);

#endif
