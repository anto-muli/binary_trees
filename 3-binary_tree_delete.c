#include "binary_trees.h"

/**
 * binary_tree_delete - removes an entire binary tree
 * @tree: a ptr to the root node of the tree to be removed
 * Description: If tree is NULL, do nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
