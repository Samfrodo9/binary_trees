#include "binary_trees.h"
/**
 * binary_tree_preorder - A function that usus pre-order
 * transversal to go through a tree
 * @tree: a pointer to the root node to transverse
 * @func: pointer to a function to call each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
