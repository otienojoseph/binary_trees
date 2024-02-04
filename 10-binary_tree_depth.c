#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree
 * @tree: pointer to the node to measure depth
 * Return: depth of tree, 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
