#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 *
 * Return: Nothing.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* If the tree is NULL, there's nothing to delete, so return immediately */
	if (tree == NULL)
		return;

	/* Recursively delete the left subtree */
	binary_tree_delete(tree->left);

	/* Recursively delete the right subtree */
	binary_tree_delete(tree->right);

	/* After the left and right subtrees are deleted, delete the root node */
	free(tree);
}
