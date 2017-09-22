#include "binarytree.h"
#include <stdio.h>
#include <stdlib.h>

int main(char *argv, int argc)
{
        (void) argv;
        (void) argc;

        int tree_elems[10] = {5, 20, 3, 10, 13, 24, 6, 8, 17, 21};

        printf("\nAdding elements to the tree...\n\n");
        Tree_T my_tree = Tree_new(tree_elems[0]);
        
        for (int i = 1; i < 10; i++){
                Tree_add(Tree_root(my_tree), tree_elems[i]);
                printf("adding elem %d to tree\n", i);
        }

        printf("\n");

        printf("Tree should print: 3 5 6 8 10 13 17 20 21 24\n\n");
        Tree_inorder(Tree_root(my_tree));

        return EXIT_SUCCESS;
}

