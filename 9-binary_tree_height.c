#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: points to the root node
 * Return: 0 or lenght of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH, rightH;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	return ((leftH > rightH ? leftH : rightH) + 1);
}
