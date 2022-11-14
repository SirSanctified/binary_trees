#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree
 * @tree: the root node of the tree to delete
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	tree->parent = NULL;
	free(tree);
}
