#include "binary_trees.h"

/**
 * height_for_balance - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: 0 If tree is NULL.
 */

static size_t height_for_balance(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = height_for_balance(tree->left) + 1;

	if (tree->right)
		right_height = height_for_balance(tree->right) + 1;

	return (left_height > right_height ? left_height : right_height);
}

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
	left_height = (tree->left) ? (int)height_for_balance(tree->left) : -1;

	/* Calculate the height of the right subtree */
	right_height = (tree->right) ? (int)height_for_balance(tree->right) : -1;

	/* Return difference between height left subtree and height right subtree */
	return (left_height - right_height);

}
