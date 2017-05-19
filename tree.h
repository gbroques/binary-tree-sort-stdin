/*
 * tree.h
 *
 *  Created on: Mar 28, 2017
 *      Author: g
 */

#ifndef TREE_H
#define TREE_H

#include <stdio.h>

typedef struct treenode
{
	struct treenode* left;
	struct treenode* right;
	int value;
} TreeNode;

TreeNode* insertNode(TreeNode* root, int v);

void printInorder(TreeNode* root);

void destroyTree(TreeNode* root);

#endif /* TREE_H */
