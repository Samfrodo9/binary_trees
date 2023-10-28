#include "binary_trees.h"

/**
 * binary_tree_t -  a function that creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to insert into new node
 * Return: Pointer to thr new node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *child = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	
	if (child == NULL)
		return NULL;

	child->n = value;
	child->parent = parent;
	child->left = NULL;
	child->right = NULL;

	return child; 
}