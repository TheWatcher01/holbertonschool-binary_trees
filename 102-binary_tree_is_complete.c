#include "binary_trees.h"

/**
 * count_nodes - Counts the number of nodes in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 *
 * Function recursively counts the number of nodes in a binary tree.
 * It uses a post-order traversal, first visiting the left subtree, then
 * the right subtree, and finally the root node.
 *
 * Return: number of nodes in the tree
 */
static int count_nodes(const binary_tree_t *tree)
{
	/* If the tree is NULL, it has no nodes, so return 0 */
	if (tree == NULL)
		return (0);

	/* Count the root node and the nodes in the left and right subtrees */
	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * is_complete - Recursively checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 * @index: index of the node in an array if the binary tree was an array
 * @number_nodes: number of nodes in the tree
 *
 * This function recursively checks if a binary tree is complete. It assigns
 * index to each node and checks if index is less than the number of nodes.
 * It uses a pre-order traversal, first visiting the root node, then the left
 * subtree, and finally the right subtree.
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
static int is_complete(const binary_tree_t *tree, int index, int number_nodes)
{
	/* If the tree is NULL, it is trivially complete, so return 1 */
	if (tree == NULL)
		return (1);

	/* If the index of a node is greater than or equal to the number of nodes, */
	/* the tree is not complete, so return 0 */
	if (index >= number_nodes)
		return (0);

	/* Check the left and right subtrees */
	return (is_complete(tree->left, 2 * index + 1, number_nodes) &&
			is_complete(tree->right, 2 * index + 2, number_nodes));
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Function checks if a binary tree is complete. It first counts the number
 * of nodes in the tree, then checks if the tree is complete using the
 * is_complete function.
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	/* Count the number of nodes in the tree */
	int number_nodes = count_nodes(tree);

	/* If the tree is NULL, it is not complete */
	if (tree == NULL)
		return (0);

	/* Check if the tree is complete */
	return (is_complete(tree, 0, number_nodes));
}
