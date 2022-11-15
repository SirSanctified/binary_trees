#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 *
 * Return: the depth of a node
 */
size_t min(size_t a, size_t b)
{
	return ((a < b) ? a + 1 : b + 1);
}

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	if (tree->parent)
		depth += 1 + binary_tree_depth(tree->parent);
	return (depth);
}
