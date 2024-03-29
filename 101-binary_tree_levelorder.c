#include "binary_trees.h"


/**
* binary_tree_levelorder - Perform a level-order traversal of a binary tree
* @tree: Pointer to the root node of the tree to traverse
* @func: Pointer to a function to call for each node
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;


binary_tree_t **queue = NULL;
size_t front = 0, rear = 0;
queue = malloc(sizeof(binary_tree_t *));
if (queue == NULL)
return;

queue[rear] = (binary_tree_t *)tree;
rear++;

while (front < rear)
{

binary_tree_t *current = queue[front];
front++;

func(current->n);

if (current->left)
{
queue = realloc(queue, sizeof(binary_tree_t *) * (rear + 1));
if (queue == NULL)
return;
queue[rear] = current->left;
rear++;
}

if (current->right)
{
queue = realloc(queue, sizeof(binary_tree_t *) * (rear + 1));
if (queue == NULL)
return;
queue[rear] = current->right;
rear++;
}
}

free(queue);
}
