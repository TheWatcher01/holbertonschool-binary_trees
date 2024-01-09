#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node of the node to be created
 * @value: The value to be stored in the new node
 *
 * This function creates a new binary tree node with a given value and attaches
 * it to a parent node. If the parent node is NULL, the new node will be a root
 * node. The function returns a pointer to the new node, or NULL if the node
 * creation fails due to memory allocation issues.
 *
 * Return: Pointer to the newly created node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Declare a pointer to the new node */
	binary_tree_t *new_node;

	/* Allocate memory for the new node */
	/* sizeof(binary_tree_t) gives the size needed for the node */
	new_node = malloc(sizeof(binary_tree_t));

	/* Check if malloc failed to allocate memory */
	if (new_node == NULL)
		/* If so, return NULL */
		return (NULL);

	/* Assign the given value to the new node */
	new_node->n = value;

	/* Assign the given parent to the new node */
	new_node->parent = parent;

	/* Initialize the left child of the new node to NULL */
	/* This is because when a node is created, it does not have any children */
	new_node->left = NULL;

	/* Initialize the right child of the new node to NULL */
	/* This is because when a node is created, it does not have any children */
	new_node->right = NULL;

	/* Return a pointer to the new node */
	return (new_node);
}
