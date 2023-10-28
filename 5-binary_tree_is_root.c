#include "binary_trees.h"
/**
 * binary_tree_is_root - A function that checks if a given node is a root
 * @node: a pointer to the node to check
 * Return: 0 if NUll or not root and 1 if otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
