#include <stdlib.h>
#include "binary_trees.h"

/**
 * is_bst_util - Utility function to check if a binary is bst
 * @tree: Pointer to the root node of the tree
 * @min: Pointer to the minimum value
 * @max: Pointer to the maximum value
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int is_bst_util(const binary_tree_t *tree, int *min, int *max)
{
    if (tree == NULL)
        return (1);

    if ((*min != INT_MIN && tree->n <= *min) ||
        (*max != INT_MAX && tree->n >= *max))
        return (0);

    return (is_bst_util(tree->left, min, &(tree->n)) &&
            is_bst_util(tree->right, &(tree->n), max));
}

/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    return (is_bst_util(tree, INT_MIN, INT_MAX));
}
