#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* Check if node and parent are not NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is the left child, return the right child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is the right child, return the left child */
	if (node->parent->right == node)
		return (node->parent->left);

	/* If node has no sibling, return NULL */
	return (NULL);
}
