#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node of the two given nodes.
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first, const binary_tree_t *second)
{
	/* Temporary pointer to traverse the ancestors of the second node */
	binary_tree_t *tmp = NULL;

	/* If either node is NULL, return NULL */
	if (!first || !second)
		return (NULL);

	/* Traverse the ancestors of the first node */
	while (first)
	{
		/* Start from the second node */
		tmp = (binary_tree_t *)second;
		/* Traverse the ancestors of the second node */
		while (tmp)
		{
			/* If the nodes are the same, return the common ancestor */
			if (first == tmp)
				return (tmp);
			/* Move to the parent node */
			tmp = tmp->parent;
		}
		/* Move to the parent node */
		first = first->parent;
	}

	/* If no common ancestor is found, return NULL */
	return (NULL);
}
