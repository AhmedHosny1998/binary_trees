#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node as right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to store in new node
 * Return: pointer to created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL, *temp = NULL;

	if (!parent)
		return (NULL);
	newnode = binary_tree_node(parent, value);
	if (!newnode)
		return (NULL);
	if (parent->right)
	{
		temp = parent->right;
		parent->right = newnode;
		newnode->right = temp;
		temp->parent = newnode;
	}
	else
		parent->right = newnode;
	return (newnode);
}