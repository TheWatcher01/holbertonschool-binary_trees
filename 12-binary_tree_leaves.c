#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of leaves
 *
 * Return: 0 If tree is NULL.
 * A NULL pointer is not a leaf
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the node is a leaf (has no children), return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Recursively calculate the number of leaves in the left subtree */
	left_leaves = binary_tree_leaves(tree->left);

	/* Recursively calculate the number of leaves in the right subtree */
	right_leaves = binary_tree_leaves(tree->right);

	/* Return the sum of the number of leaves in the two subtrees */
	return (left_leaves + right_leaves);
}
