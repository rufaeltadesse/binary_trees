#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checking
 * @node: node to be checked
 *
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
