#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left child of another node
 * @parent: a pointer to node to insert left child in
 * @value: the value to store in the new node
 *
 * Description: if parent already has a left-child,
 * the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 * Return: a pointer to created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (!new_node || !parent)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}
