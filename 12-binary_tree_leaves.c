#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_no = 0;

	if (tree)
	{
		leaves_no += (!tree->left && !tree->right) ? 1 : 0;
		leaves_no += binary_tree_leaves(tree->left);
		leaves_no += binary_tree_leaves(tree->right);
	}
	return (leaves_no);
}
