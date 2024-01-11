#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* Check if node, parent and grandparent are not NULL */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* If node's parent is the left child of grandparent, return right child */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* If node's parent is the right child of grandparent, return left child */
	if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	/* If node has no uncle, return NULL */
	return (NULL);
}
