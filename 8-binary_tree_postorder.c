#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through each node in postorder traversal
 * @tree: root node of the tree to be traversed
 * @func: a pointer to  function that prints a node's data
 *
 * Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
