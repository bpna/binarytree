#include "binarytree.h"
#include <stdio.h>
#include <stdlib.h>

struct Tree_T {
        Node root;
};

struct Node {
        Node left;
        Node right;
        int elem;
};

Tree_T Tree_new(int elem)
{
        Node n = malloc(sizeof(*n));
        n->elem = elem;
        n->left = NULL;
        n->right = NULL;

        Tree_T t = malloc(sizeof(*t));
        t->root = n;

        return t;
}

void Tree_add(Node n, int elem)
{
        if (n->elem > elem){
                if (n->left == NULL){
                        Node child = malloc(sizeof(child));
                        child->elem = elem;
                        child->left = NULL;
                        child->right = NULL;

                        n->left = child;

                        return;
                } else {
                        Tree_add(n->left, elem);
                }
        }

        if (n->elem < elem){
                if (n->right == NULL){
                        Node child = malloc(sizeof(*child));
                        child->elem = elem;
                        child->left = NULL;
                        child->right = NULL;

                        n->right = child;

                        return;
                } else {
                        Tree_add(n->right, elem);
                }
        }


        return;
}

void Tree_inorder(Node n)
{
        if (n->left != NULL)
                Tree_inorder(n->left);
        printf("%d\n", n->elem);
        if (n->right != NULL)
                Tree_inorder(n->right);
}

Node Tree_root(Tree_T t)
{
        return t->root;
}
