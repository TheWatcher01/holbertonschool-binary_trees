#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 0 If tree is NULL or a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	/* If tree is NULL or a leaf, return 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively calculate height of left subtree, add 1 if not NULL */
	left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;

	/* Recursively calculate height of right subtree, add 1 if not NULL */
	right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	/* Return greater height between two subtree */
	return (left_height > right_height ? left_height : right_height);
}
