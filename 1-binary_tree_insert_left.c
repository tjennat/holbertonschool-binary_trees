#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node as left-child
 * @parent: parent of the node to add
 * @value: value of the new left node
 * Return: pointer to the new left node
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));

    if (new_node == NULL)
    {
        return (NULL);
    }

    if (parent == NULL)
    {
        return (NULL);
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = parent->left;
    new_node->right = NULL;

    if (parent->left != NULL)
        parent->left->parent = new_node;
    
    parent->left = new_node;

    return (new_node);

}