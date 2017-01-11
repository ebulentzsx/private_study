#ifndef __SEQLIST_H__
#define __SEQLIST_H__

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 20
typedef int datatype;

typedef struct list{
      datatype data[SIZE];
      int last;
}seq_list,*seq_plist;


extern bool creat_list(seq_plist *p);
extern bool clear_list(seq_plist p);
extern bool isempty_list(seq_plist p);
extern bool isfull_list(seq_plist p);
extern bool insert_list(seq_plist p,datatype x);
extern bool del_list(seq_plist p,datatype x);
extern bool show_list(seq_plist p);

#endif
