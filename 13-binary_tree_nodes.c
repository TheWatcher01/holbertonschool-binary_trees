#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Return: 0 If tree is NULL.
 * A NULL pointer is not a node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursively calculate the number of nodes in the left subtree */
	left_nodes = binary_tree_nodes(tree->left);

	/* Recursively calculate the number of nodes in the right subtree */
	right_nodes = binary_tree_nodes(tree->right);

	/* If node at least 1 child return 1 + number of node in two subtree */
	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);

	/* If node has no children return, number of node in two subtree */
	return (left_nodes + right_nodes);
}
