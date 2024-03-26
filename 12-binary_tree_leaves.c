#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: point to the root node
 * Return: 0 or leave count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeave, rightLeave;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	leftLeave = binary_tree_leaves(tree->left);
	rightLeave = binary_tree_leaves(tree->right);

	return (leftLeave + rightLeave);
}
