#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 0 If tree is NULL.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the node is a leaf, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the node has two children */
	if (tree->left != NULL && tree->right != NULL)
	{
		/* Calculate the height of the left and right subtrees */
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		/* Check if the left and right subtrees are perfect */
                /* and have the same height */
		if (left_height == right_height)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	/* If the node has one child, or if the left and right */
	/* subtrees are not perfect or don't have the same height, */
	/* return 0 */
	return (0);
}
