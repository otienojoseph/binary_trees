#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if node is a leaf
 * @node: pointer to node to check
 * Return: 1 if leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	if (node->left != NULL && node->right != NULL)
		return (binary_tree_is_leaf(node->left) && binary_tree_is_leaf(node->right));
}
