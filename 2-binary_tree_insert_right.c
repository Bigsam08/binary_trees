#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node
 * @parent: node to insert the right-child.
 * @value: value of the new node.
 *
 * Return: NULL for error or the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);
new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);
new->n = value;
new->parent = parent;
new->left = NULL;
new->right = parent->right;
parent->right = new;
if (new->right)
new->right->parent = new;

return (new);
}
