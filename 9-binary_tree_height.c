#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: 0 If tree is NULL, height of the tree otherwise.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the height of the left subtree, add 1 if not NULL */
	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	/* Recursively calculate the height of the right subtree, add 1 if not NULL */
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	/* Return greater height between two subtree */
	return (left_height > right_height ? left_height : right_height);
}
