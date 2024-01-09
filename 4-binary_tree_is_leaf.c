#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0. If node is NULL, return 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If node is NULL, return 0 */
	if (node == NULL)
		return (0);

	/* If node is a leaf (it has no children), return 1 */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* If node is not a leaf, return 0 */
	return (0);
}
