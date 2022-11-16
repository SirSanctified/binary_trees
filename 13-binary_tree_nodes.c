#include "binary_trees.h"

/**
 * binary_tree_nodes - count the number of nodes with at least 1 child nodes
 * @tree: pointer to the root node of the tree to count
 *
 * Return: number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
		nodes += 1;

	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
