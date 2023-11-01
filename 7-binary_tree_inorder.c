#include <stddef.h>
#include <stdio.h>

/**
* binary_tree_inorder - Perform in-order traversal on a binary tree.
* @tree: A pointer to the root node of the tree to traverse.
* @func: A pointer to a function to call for each node. The value in the node
*        must be passed as a parameter to this function.
*/
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

/**
* print_data - A sample function to print the data value of a binary tree node.
* @data: The data value to be printed.
*/
void print_data(int data)
{
printf("%d ", data);
}
