#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node in the left of the parent
 * @parent: parent node pointer
 * @value: value of new node
 *
 * Return: new node pointer, otherwise NULL
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
		new_node->left = parent->left;
		parent->left->parent = new_node;

	parent->left = new_node;

	return (new_node);
}