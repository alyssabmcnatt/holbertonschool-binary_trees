#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: value to store the new node in
 * Return: a pointer to the created node if success, or NULL
 * Description: if already a left-child, new node replaces it
 * and old must be set as left-child of new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
