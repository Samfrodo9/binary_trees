#include "binary_trees.h"

/**
* binary_tree_size - Measures the size of a binary tree
* @tree: Pointer to the root node of the tree
* Return: The size of the binary tree
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sizeOfTree = 0;

	if (tree)
	{
		sizeOfTree += 1;
		sizeOfTree += binary_tree_size(tree->left);
		sizeOfTree += binary_tree_size(tree->right);
	}
	return (sizeOfTree);
}
