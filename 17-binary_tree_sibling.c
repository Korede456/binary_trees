#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: points to the node whose sibling is to be found
 * Return: a pointer to the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
	{
		return (node->parent->right);
	}
	else if (node->parent->right)
	{
		return (node->parent->left);
	}
	else
	{
		return (NULL);
	}
}
