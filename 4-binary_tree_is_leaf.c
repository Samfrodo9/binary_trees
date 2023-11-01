#include <stddef.h>

truct binary_tree_node{
int data;
struct binary_tree_node *left;
struct binary_tree_node *right;
};

/**
* binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
* @node: A pointer to the node to check.
* Return: 1 if the node is a leaf, 0 otherwise. If node is NULL, return 0.
*/
int binary_tree_is_leaf(const struct binary_tree_node *node)
{
if (node == NULL)
{
return (0);
}

return (((node->left == NULL) && (node->right == NULL)) ? 1 : 0);
}
