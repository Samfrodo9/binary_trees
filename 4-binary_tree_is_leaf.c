#include "binary_trees.h"
/**
 * binary_tree_is_leaf - A function that deletes an entire binary tree
 * @node: a pointer to the node to check
 * Return: Null if null, 1 if it's leaf and 0 if otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if ((node->left) || (node->right) != NULL)
		return (0);
	else
		return (1);
}
