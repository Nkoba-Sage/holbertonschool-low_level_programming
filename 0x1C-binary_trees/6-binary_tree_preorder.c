#include "binary_trees.h"
/**
  * binary_tree_preorder - define function
  * @void: describe argument
  * Return: 0 on success
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	binary_tree_preorder(tree->left, &(*func));
	binary_tree_preorder(tree->right, &(*func));
}
