#include "binary_trees.h"

/**
 * binary_tree_height - get height of a binary tree
 * @tree: tree to measure
 *
 * Return: if tree is NULL return 0 else height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t right = 0;
    size_t left = 0, height;

    if (tree == NULL)
    return (0);
    else
    left  = tree->left ? 1 + binary_tree_height(tree->left) : 0;
    right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
    height = ((left > right) ? 1 : right);
    return (height);
}
