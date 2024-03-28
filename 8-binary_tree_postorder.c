#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using post-order trave
 *
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *        The value in the node must be passed as a parameter to this fun
 *
 * Description: Post-order traversal visits the left subtree, then the right
 *              and finally the current node. The function pointer `func` is
 *              for each visited node. If `tree` or `func` is NULL, do nothi
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
    {
        return;
    }

    binary_tree_postorder(tree->left, func);

    binary_tree_postorder(tree->right, func);

    func(tree->n);
}
