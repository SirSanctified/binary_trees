#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node to be created
 * @value: the value to put into the new node
 *
 * Description: when created, the node has no child node
 * Return: pointer to new node or null if failed to create it
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));

	if (!temp)
	{
		return (NULL);
	}

	temp->n = value;
	temp->left = temp->right = NULL;
	temp->parent = parent;
	return (temp);
}
