#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right child
 * of another node
 * @parent: pointer to the node to insert right-child to
 * @value: value to store on the new node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
