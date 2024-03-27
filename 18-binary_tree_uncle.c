#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node in a binary tree
 * @node: node whose uncle is to be found
 * Return: NULL or pointer to the uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandParent;

	if (!node || !node->parent)
		return (NULL);

	parent = node->parent;
	grandParent = parent->parent;

	if (!grandParent || !grandParent->left || !grandParent->right)
		return (NULL);

	if (grandParent->left == parent)
	{
		return (grandParent->right);
	}
	else
	{
		return (grandParent->left);
	}
}
