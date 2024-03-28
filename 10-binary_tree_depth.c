#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a node.
 *
 * @tree: A pointer to the node.
 *
 * Return: The depth of the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

    /* Traverse up the tree to find the depth */
	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return (depth);
}
