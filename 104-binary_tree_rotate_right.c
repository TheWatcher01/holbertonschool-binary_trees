#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * This function performs a right-rotation on a binary tree. It moves the left
 * child of the root up to become the new root, and the old root becomes the
 * right child of the new root.
 *
 * Return: Pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	/* Temporary pointer for the new root of the tree after rotation */
	binary_tree_t *new_root = NULL;

	/* If the tree is NULL, return NULL */
	if (tree != NULL)
	{
		/* Assign the left child of the root to the new_root pointer */
		new_root = tree->left;

		/* If there is a left child, perform the rotation */
		if (new_root != NULL)
		{
			/* Move the right child of new root to be new left child of old root */
			tree->left = new_root->right;

			/* If right child of new root exists, update its parent to old root */
			if (new_root->right != NULL)
				new_root->right->parent = tree;

			/* Move the old root to be the right child of the new root */
			new_root->right = tree;

			/* Update parent of the old root to be the parent of the new root */
			new_root->parent = tree->parent;

			/* Update the parent of the new root to be the old root */
			tree->parent = new_root;
		}
	}

	/* Return the new root of the tree after rotation */
	return (new_root);
}
