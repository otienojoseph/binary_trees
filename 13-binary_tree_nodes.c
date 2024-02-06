#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts all nodes with at least 1 child
 * @tree: pointer to the root node
 * Return: count of with atleast 1 child, 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	count = 0;
	if (tree == NULL)
		return (0);

	/* If tree node has at least 1 child increment count */
	if (tree->left != NULL || tree->right != NULL)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
