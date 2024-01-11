#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 0 If tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If the current node has no children, return 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If current node= 2 children, recursively check if l & r subtree are full */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* In all other cases (i.e., if the node has one child), return 0 */
	return (0);
}
