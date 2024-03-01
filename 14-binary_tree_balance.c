#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: tree to go through
 *
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = (int)binary_tree_height(tree->left);
	r_height = (int)binary_tree_height(tree->right);

	return (l_height - r_height);
}
