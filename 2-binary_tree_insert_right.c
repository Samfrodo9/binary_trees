#include "binary_trees.h"
/**
 * binary_tree_insert_right - A function to insert a node as right-child
 *  of another node
 * @parent: pointer to the node to insert the right child in
 * @value: value to store in the new node
 * Return: NULL on failure or pointer to the newly created Node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);

}