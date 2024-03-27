#include "binary_trees.h"
#include <stdlib.h>

void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    // Delete left subtree
    binary_tree_delete(tree->left);

    // Delete right subtree
    binary_tree_delete(tree->right);

    // Free current node
    free(tree);
}
