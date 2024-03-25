#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: is a pointer to the node to be inserted to
 * @value: value to store in the new node
 * Return: return a pointer to the new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = NULL;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
