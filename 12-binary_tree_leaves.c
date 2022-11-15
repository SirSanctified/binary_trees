#include "binary_trees.h"

/**
 * binary_tree_leaves - find the number of leaves
 * @tree: the tree to find the leaves from
 *
 * Return: the number of leaf nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0;
	size_t right_leaves = 0;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	left_leaves += binary_tree_leaves(tree->left);
	right_leaves += binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
