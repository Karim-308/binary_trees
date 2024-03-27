#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node, *temp;

    /* Check if parent is NULL */
    if (parent == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    /* Initialize the new node */
    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    /* Handle the case where the parent already has a left child */
    if (parent->left != NULL)
    {
        /* Store the current left child in a temporary node */
        temp = parent->left;
        
        /* Set the new node as the left child of the parent */
        parent->left = new_node;

        /* Set the temporary node as the left child of the new node */
        new_node->left = temp;
        
        /* Update the parent pointer of the temporary node */
        temp->parent = new_node;
    }
    else
    {
        /* If the parent doesn't have a left child, simply set the new node as the left child */
        parent->left = new_node;
    }

    /* Return a pointer to the newly created node */
    return (new_node);
}
