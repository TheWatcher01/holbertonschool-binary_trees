#include "binary_trees.h"

/**
 * binary_tree_levelorder - Goes through binary tree use level-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *queue[1024];
	int start = 0, end = 0;

	if (!tree || !func)
		return;

	queue[end++] = tree;

	while (start < end)
	{
		const binary_tree_t *node = queue[start++];

		func(node->n);

		if (node->left)
			queue[end++] = node->left;
		if (node->right)
			queue[end++] = node->right;
	}
}
