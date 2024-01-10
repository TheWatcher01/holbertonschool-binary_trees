#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: 0 If tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left subtree */
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	/* Recursively calculate the height of the right subtree */
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	/* Return the maximum of the two heights */
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
