#include "binary_trees.h"


/**
 *
 */

int lesser(binary_tree_t *tree, int val)
{
	if (!tree)
		return (1);
	if (tree->n < val
		&& lesser(tree->left, val)
		&& lesser(tree->right, val))
		return (1);
	return (0);
}

/**
 *
 */

int greater(binary_tree_t *tree, int val)
{
	if (!tree)
		return (1);
	if (tree->n > val
		&& greater(tree->left, val)
		&& greater(tree->right, val))
		return (1);
	return (0);
}

/**
 * is_bst_util - helper function
 * @tree: root node for tree to check if it is bst
 * @min_val: the minimum value expected in the left side of bst
 * @max_val: the maximum value expected in the right side of bst
 *
 * Return: 1 if tree is bst, 0 otherwise
 */

int is_bst_util(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if (lesser(tree->left, tree->n)
		&& greater(tree->right, tree->n)
		&& is_bst_util(tree->left)
		&& is_bst_util(tree->right))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_bst - check if tree is valid bst
 * @tree: pointer to root node of tree to check
 *
 * Return: 1 if valid, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst_util(tree));
}
