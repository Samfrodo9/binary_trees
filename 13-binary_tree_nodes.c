#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least one child in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: The number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t total_nodes = 0;

	if (tree)
	{
		total_nodes += (tree->left || tree->right) ? 1 : 0;
		total_nodes += binary_tree_nodes(tree->left);
		total_nodes += binary_tree_nodes(tree->right);
	}
	return (total_nodes);
}
