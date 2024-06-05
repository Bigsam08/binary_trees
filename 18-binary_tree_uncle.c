#include "binary_trees.h"

/**
 * binary_tree_uncle - the uncle of a node
 * @node: the node
 *
 * Return: Pointer to the uncle node, or NULL
 *          if no uncle or node is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node->parent || !node || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (NULL);
}
