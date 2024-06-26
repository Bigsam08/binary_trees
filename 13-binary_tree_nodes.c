#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child
 * @tree: root node of the tree to count  nodes
 *
 * Return:0 if NULL :  Number of nodes with at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
