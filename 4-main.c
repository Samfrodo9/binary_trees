<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
=======
>>>>>>> f275486c36fbf3526f262e5b2e8ac66d9a2a15ea
#include "binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
<<<<<<< HEAD
    binary_tree_t *root;
    int ret;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    ret = binary_tree_is_leaf(root);
    printf("Is %d a leaf: %d\n", root->n, ret);
    ret = binary_tree_is_leaf(root->right);
    printf("Is %d a leaf: %d\n", root->right->n, ret);
    ret = binary_tree_is_leaf(root->right->right);
    printf("Is %d a leaf: %d\n", root->right->right->n, ret);
    return (0);
}
=======
	binary_tree_t *root;
	int ret;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	ret = binary_tree_is_leaf(root);
	printf("Is %d a leaf: %d\n", root->n, ret);
	ret = binary_tree_is_leaf(root->right);
	printf("Is %d a leaf: %d\n", root->right->n, ret);
	ret = binary_tree_is_leaf(root->right->right);
	printf("Is %d a leaf: %d\n", root->right->right->n, ret);
	return (0);
}
>>>>>>> f275486c36fbf3526f262e5b2e8ac66d9a2a15ea
