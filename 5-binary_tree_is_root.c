#include "binary_trees.h"

/**
 * binary_tree_is_root - check if the node is root
 * @node: the node to check for root
 *
 * Return: 1 if root, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || (node->parent))
		return (0);
	return (1);
}
