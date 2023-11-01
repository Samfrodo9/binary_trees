<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree.
 * @tree: pointer to the root node.
 * Return: void
=======
#include "binary_trees.h"
/**
 * binary_tree_delete - A function that deletes an entire binary tree
 * @tree: pointer to the root node of tree to delete
>>>>>>> f275486c36fbf3526f262e5b2e8ac66d9a2a15ea
 */

void binary_tree_delete(binary_tree_t *tree)
{
<<<<<<< HEAD
if (tree == NULL)
{
return;
}
binary_tree_delete(tree->left);
binary_tree_delete(tree->right);

free(tree);
=======
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
>>>>>>> f275486c36fbf3526f262e5b2e8ac66d9a2a15ea
}
