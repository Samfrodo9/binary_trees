#include "binary_trees.h"
/**
 * binary_tree_insert_left - A function to insert a node as left-child
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 * Return: NULL on failure or pointer to the newly created Node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);

	/** if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}

	parent->left = newNode;

	return (newNode);
	**/
}
