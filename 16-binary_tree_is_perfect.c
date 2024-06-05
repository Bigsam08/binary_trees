#include "binary_trees.h"

/**
 * binary_tree_size - size of a binary tree
 * @tree: root node of tree
 *
 * Return: 0 if tree is NULL or s8ze of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}


/**
 * binary_tree_height - height of tree
 * @tree: root node of tree
 *
 * Return: Height of the tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (1 + (left > right ? left : right));
}


/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise or if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, nodes;

	if (!tree)
		return (0);
	height = binary_tree_height(tree);
	nodes = (1 << height) - 1;
	return (nodes == binary_tree_size(tree));
}
