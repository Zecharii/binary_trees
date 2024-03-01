#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes in a binary tree
 * @tree: tree to check through
 *
 * Return: number of nodes with at least 1 child, 0 otherwise
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	return ((binary_tree_node(tree->left) + binary_tree_nodes(tree->right) + 1));
}
