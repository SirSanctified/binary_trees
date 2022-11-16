#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node or null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (node->parent && node == node->parent->left && node->parent->parent)
		return (node->parent->parent->left);
	if (node->parent && node == node->parent->right && node->parent->parent)
		return (node->parent->parent->right);
	return (NULL);
}
