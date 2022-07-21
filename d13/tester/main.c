#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"
void btree_apply_infix(t_btree *root, void (*applyf)(void *));

int main()
{
    int tree = NULL;
    btree_create_node(1);
    btree_apply_prefix(tree,printf(tree));
    return(0);
}