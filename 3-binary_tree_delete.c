#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire tree
 * @tree: tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
