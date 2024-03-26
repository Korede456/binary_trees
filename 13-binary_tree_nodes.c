#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with atleast one child
 * @tree: points to the root node
 * Return: 0 or count
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
