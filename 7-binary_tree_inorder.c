#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through each node in inorder traversal
 * @tree: the root of the tree to be traversed
 * @func: a pointer to a function that prints the nodes data
 *
 * Return: nothing
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
