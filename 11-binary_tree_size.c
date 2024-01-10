#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 *
 * Return: 0 If tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the size of the left subtree */
	left_size = binary_tree_size(tree->left);

	/* Recursively calculate the size of the right subtree */
	right_size = binary_tree_size(tree->right);

	/* Return sum of sizes of two subtrees, plus one for current node */
	return (left_size + right_size + 1);
}
