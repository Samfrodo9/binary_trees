#include <stddef.h>

typedef struct binary_tree_node{
    int data;
    struct binary_tree_node *left;
    struct binary_tree_node *right;
} binary_tree_t;

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)) 
{

    if (tree == NULL || func == NULL) 
    {
        return;
    }

    binary_tree_inorder(tree->left, func);
    func(tree->data);
    binary_tree_inorder(tree->right, func);
}
