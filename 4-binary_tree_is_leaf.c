<<<<<<< HEAD
#include <stddef.h>

truct binary_tree_node{
int data;
struct binary_tree_node *left;
struct binary_tree_node *right;
};

/**
* binary_tree_is_leaf - Checks if a node is a leaf in a binary tree.
* @node: A pointer to the node to check.
* Return: 1 if the node is a leaf, 0 otherwise. If node is NULL, return 0.
*/
int binary_tree_is_leaf(const struct binary_tree_node *node)
{
if (node == NULL)
{
return (0);
}

return (((node->left == NULL) && (node->right == NULL)) ? 1 : 0);
=======
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
>>>>>>> f275486c36fbf3526f262e5b2e8ac66d9a2a15ea
}
