#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: pointer to the root node
 * Return: 0 if NULL or 1 if full tree
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	/* check if its a leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* if both left and right are not NULL */
	/* and left and right subtrees are full */
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	return (0);
}
