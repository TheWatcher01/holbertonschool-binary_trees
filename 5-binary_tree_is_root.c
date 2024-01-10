#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0. If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If node is NULL, return 0 */
	if (node == NULL)
		return (0);

	/* If node is a root (it has no parent), return 1 */
	if (node->parent == NULL)
		return (1);

	/* If node is not a root, return 0 */
	return (0);
}
