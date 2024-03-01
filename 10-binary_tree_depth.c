#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: tree to go through
 *
 * Return: depth of tree, 0 otherwise
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);
	return (depth);
}
