#include "binary_trees.h"

/**
* binary_trees_ancestor - Finds the lowest common ancestor of two nodes
* @first: Pointer to the first node
* @second: Pointer to the second node
* Return: Pointer to the lowest common ancestor node or NULL if not found
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return ((binary_tree_t *)first);

binary_tree_t **ancestors_first = get_ancestors(first);
binary_tree_t **ancestors_second = get_ancestors(second);

binary_tree_t *lca = find_lowest_common_ancestor(ancestors_first, ancestors_second);

free(ancestors_first);
free(ancestors_second);

return (lca);
}

/**
* get_ancestors - Helper function to get the ancestors of a node
*/
binary_tree_t **get_ancestors(const binary_tree_t *node)
{
if (node == NULL)
return (NULL);

binary_tree_t **ancestors = NULL;
size_t count = 0;

while (node)
{
ancestors = realloc(ancestors, sizeof(binary_tree_t *) * (count + 1));
if (ancestors == NULL)
return (NULL);

ancestors[count] = (binary_tree_t *)node;
count++;

node = node->parent;
}

return (ancestors);
}

/**
* find_lowest_common_ancestor - Helper function to find the LCA
*/
binary_tree_t *find_lowest_common_ancestor(binary_tree_t **ancestors_first, binary_tree_t **ancestors_second)
{
if (ancestors_first == NULL || ancestors_second == NULL)
return (NULL);

binary_tree_t *lca = NULL;
size_t count_first = 0;
size_t count_second = 0;
while (count_first < count_second || (lca == NULL && count_first < count_second))

{
if (ancestors_first[count_first] == ancestors_second[count_second])
lca = ancestors_first[count_first];

count_first++;
count_second++;
}

return (lca);
}
