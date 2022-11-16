#include "binary_trees.h"

/**
 * bst_insert_util - inserts a value in a Binary Search Tree
 * @root: double pointer to the root node of the BST to insert the value
 * @node: the node containing the value to be inserted
 *
 * Return: pointer to the created node, or NULL on failure
 */

bst_t *bst_insert_util(bst_t *root, bst_t *node)
{
	if (!root)
	{
		root = node;
		return (node);
	}

	else if (root->n < node->n && !root->right)
	{
		node->parent = root;
		root->right = node;
		return (node);
	}
	else if (root->n > node->n && !root->left)
	{
		node->parent = root;
		root->left = node;
		return (node);
	}
	else {
		return (NULL);
	}

	if (root->n < node->n)
		return (bst_insert_util(root->right, node));
	if (root->n > node->n)
		return (bst_insert_util(root->left, node));

	return (NULL);
}

/**
 *
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = binary_tree_node(*tree, value);
	return (bst_insert_util(*tree, node));
}
