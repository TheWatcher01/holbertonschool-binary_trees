#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 *
 * Return: 0 If tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Calculate the height of the left subtree */
	left_height = (tree->left) ? (int)_height(tree->left) : -1;

	/* Calculate the height of the right subtree */
	right_height = (tree->right) ? (int)_height(tree->right) : -1;

	/* Return difference between height left subtree and height right subtree */
	return (left_height - right_height);
}
