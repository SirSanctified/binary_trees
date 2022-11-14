#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert created node to the right of parent
 * @parent: pointer to the node to insert right-child in
 * @value: value to be stored in new node
 *
 * Description: If parent already has a right-child,
 * the new node must take its place,
 * and the old right-child must be set as the right-child of the new node.
 * Return: a pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(NULL, value);

	if (!new_node || !parent)
	{
		return (NULL);
	}

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
