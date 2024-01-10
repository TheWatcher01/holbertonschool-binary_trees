#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node as the right-child
 *                            of a given node in a binary tree.
 * @parent: Pointer to the parent node where the right-child will be inserted.
 * @value: Integer value to be stored in the new node.
 *
 * Description: If the parent node already has a right-child, the new node must
 *              take its place, and the old right-child must be set as the
 *              right-child of the new node.
 *
 * Return: Pointer to the newly created node, or NULL if failure occurs or if
 *         the parent node is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	/* Declare a new node pointer */
	binary_tree_t *new_node;

	/* If parent is NULL, return NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node with the given value and parent */
	new_node = binary_tree_node(parent, value);
	/* If the new node creation failed, return NULL */
	if (new_node == NULL)
		return (NULL);

	/* If the parent already has a right child */
	if (parent->right != NULL)
	{
		/* Make the new node the parent of the old right child */
		new_node->right = parent->right;
		/* Update the parent pointer of the old right child */
		parent->right->parent = new_node;
	}

	/* Make the new node the right child of the parent */
	parent->right = new_node;

	/* Return the new node */
	return (new_node);
}
