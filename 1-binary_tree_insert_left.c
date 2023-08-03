#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a nod
 * @parent: pointer to the node to insert
 * @value: Store value new node
 *
 * Return: Pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->right = NULL;
	newNode->left = parent->left;
	parent->left = newNode;
	if (newNode->left)
		newNode->left->parent = newNode;
	return (newNode);
}
