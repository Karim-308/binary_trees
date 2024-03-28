#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child intree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes with at least one child, or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);
    if (tree->left || tree->right)
        return (1+binary_tree_nodes(tree->left)+binary_tree_nodes(tree->right));
    return (0);
}
