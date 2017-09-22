#ifndef TREE_INCLUDED
#define TREE_INCLUDED

#define T Tree_T
typedef struct T *T;

#define N Node
typedef struct N *N;

extern T        Tree_new(int elem);
extern void     Tree_add(N n, int elem);
extern void     Tree_inorder(N n);
extern N        Tree_root(T t);    

/*
 * Not sure yet how the depth first traversal differs from in-order traversal.
 * 
 * extern void     Tree_depthfirst(Tree_T *t);
 */

#undef T
#undef N
#endif
