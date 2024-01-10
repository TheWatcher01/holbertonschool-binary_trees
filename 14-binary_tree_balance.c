#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
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
	left_height = (tree->left) ? (int)binary_tree_height(tree->left) + 1 : 0;

	/* Calculate the height of the right subtree */
	right_height = (tree->right) ? (int)binary_tree_height(tree->right) + 1 : 0;

	/* Return difference between height left subtree and height right subtree */
	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 0 If tree is NULL or a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	/* If tree is NULL or a leaf, return 0 */
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	/* Recursively calculate the height of the left subtree */
	left_height = binary_tree_height(tree->left);

	/* Recursively calculate the height of the right subtree */
	right_height = binary_tree_height(tree->right);

	/* Return greater height between two subtree, + one for current node */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
