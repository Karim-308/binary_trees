#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root.
 *
 * @node: A pointer to the node to check.
 *
 * Return: 1 if node is a root, otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
    /* Check if the node is NULL */
    if (node == NULL)
    {
        /* If node is NULL, it cannot be a root */
        return (0);
    }

    /* Check if the node has a parent */
    if (node->parent == NULL)
    {
        /* If node does not have a parent, it is a root */
        return (1);
    }
    else
    {
        /* If node has a parent, it is not a root */
        return (0);
    }
}
