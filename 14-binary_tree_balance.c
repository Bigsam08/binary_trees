#include "binary_trees.h"

/**
 * binary_tree_balance - Measures  balance factor of a binary tree.
 * @tree: root node of the tree
 *
 * Return: If tree is NULL, return 0
 *          else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - measure height of a binary tree.
 * @tree: root node of the tree
 *
 * Return: If tree return height else return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		size_t left = 0, right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
