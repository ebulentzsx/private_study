#ifndef __HASH_C__
#define __HASH_C__
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define N 15
typedef int datatype;
typedef struct hashtable{
      datatype *h_rcd;
      int h_len;
}h_t,*h_pt;

typedef struct hash_node{
	datatype data;
	struct hash_node *next;
}h_node,*h_pnode;

typedef struct link_hash{
	h_pnode *lh_rcd;
	int lh_len;
}h_link,*h_p_link;
extern h_pt creat_hash(datatype a[],int n);
extern int get_p(int m);
extern void show_hash(h_pt h);
extern datatype hash_search(h_pt h,datatype key);
extern h_p_link creat_link_hash(datatype a[],int n);
extern h_p_link init_link_hash(void);
extern void show_link_hash(h_p_link h);
extern h_pnode hash_link_search(h_p_link h,datatype key);
#endif
