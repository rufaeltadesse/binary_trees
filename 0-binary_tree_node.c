#include "binary_trees.h"

/**
 * binary_tree_node - binary tree
 * @parent: pointer to parent
 * @value: value to put in the new node
 *
 * Return: pointer
 *         NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	return (newNode);
}
