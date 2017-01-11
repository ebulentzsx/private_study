#ifndef __SEQQUEUE_H__
#define __SEQQUEUE_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "tree.h"

typedef p_t_node datatype_seq_q;
#define SIZE 20
typedef struct seqqueue {
	datatype_seq_q data[SIZE];
	int front,rear;
}seq_q,*seq_p_q;

extern void init_seq_q(seq_p_q *q);
extern bool is_empty_seq_q(seq_p_q q);
extern bool is_full_seq_q(seq_p_q q);
extern bool in_queue(seq_p_q q,datatype_seq_q x);
extern bool out_queue(seq_p_q q,datatype_seq_q *x);
//extern void show_queue(seq_p_q q);



#endif
