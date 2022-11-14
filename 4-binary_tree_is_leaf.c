#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf node
 * @node: the node to be checked
 *
 * Return: 1 if node is leaf, 0 if not and 0 if node is null
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!(node->left) && !(node->right))
		return (1);
	else
		return (0);
}
