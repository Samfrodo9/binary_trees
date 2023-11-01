#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of node
 *  in a binary tree
 * @tree: A pointer to the node to measure the depth.
 * must be passed as a parameter to this function.
 * Return: size of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		count++;
		tree = tree->parent;
	}

	return (count);
}
