#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of the binary tree
 * @tree: tree to go through
 *
 * Return: size of the tree, or 0 otherwise
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((1 + binary_tree_size(tree->left) + binary_tree_size(tree->right)));
}
