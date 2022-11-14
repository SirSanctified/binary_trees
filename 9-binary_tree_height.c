#include "binary_trees.h"


/**
 * max - find the maximum between two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: the greater between num1 and num2
 */

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
	{
		return (0);
	}
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		
		if (left_height >= right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}
