#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Root node
 * Return: Size of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t lt, rt;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);

	lt = binary_tree_height(tree->left);
	rt = binary_tree_height(tree->right);

	if (lt > rt)
		return (lt + 1);
	else
		return (rt + 1);
}

