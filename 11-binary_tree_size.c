#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: points to the root node of the binary tree
 * Return: 0 or size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
		return (0);

	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
