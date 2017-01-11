#include "tree.h"
#include "seqqueue.h"
int main(void)
{
      p_t_node root=NULL;
      make_tree(&root);
      printf("Pre order:\n");
      pre_order(root);
      printf("\n");

      printf("Level order:\n");
      level_order(root);
      printf("\n");

      printf("Linksatck prev order:\n");
      linkstack_prev_order(root);
      printf("\n");

      printf("Mid order:\n");
      mid_order(root);
      printf("\n");

      printf("Post order:\n");
      post_order(root);
      printf("\n");

      printf("Linkstcak Post order:\n");
      linkstack_post_order(root);
      printf("\n");
      return  0;
}
