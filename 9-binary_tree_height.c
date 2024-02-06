#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: root node
 * Return: height of tree, 0 if NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	return ((left_height > right_height) ? (left_height) :
			(right_height));
}
