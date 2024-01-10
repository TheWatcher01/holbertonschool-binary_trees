#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of a given node
 * @parent: Pointer to the parent node where the left-child will be inserted
 * @value: The integer value to be stored in the new node
 *
 * This function creates a new node, sets its value to 'value', and inserts it
 * as the left-child of 'parent'. If 'parent' already has a left-child, new
 * node replaces it and the old left-child becomes left-child of new node.
 *
 * Return: Pointer to the newly created node, or NULL if the creation failed or
 * if 'parent' is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
