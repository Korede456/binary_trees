#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: points to the root node
 * Return: 0 or height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftH, rightH;

	if (tree == NULL)
		return (0);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	return ((leftH > rightH ? leftH : rightH) + 1);
}

/**
 * binary_tree_balance - Measures the balance of a binary tree
 * @tree: points to the root node of the binary tree
 * Return: 0 or balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	return ((int) (leftHeight - rightHeight));
}
