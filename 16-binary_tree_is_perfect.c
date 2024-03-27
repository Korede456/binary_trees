#include "binary_trees.h"

/**
 * tree_height - measures the height of a tree
 * @tree: points to the root node
 * Return: height
 */

int tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = tree_height(tree->left);
		right = tree_height(tree->right);

		return ((left > right ? left : right) + 1);
	}
}

/**
 * is_perfect_binary_tree - checks for perfection
 * @tree: root node
 * @height: tree height
 * @level: tree level
 * Return: 0
 */

int is_perfect_binary_tree(const binary_tree_t *tree, int height, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (height == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_binary_tree(tree->left, height, level + 1) &&
			is_perfect_binary_tree(tree->right, height, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: points to the root node of the tree
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height;

	if (tree == NULL)
		return (0);
	height = tree_height(tree);
	return (is_perfect_binary_tree(tree, height, 0));
}
