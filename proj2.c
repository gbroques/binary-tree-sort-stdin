/*
 ============================================================================
 Name        : proj2.c
 Author      : 
 Version     :
 Copyright   : MIT License
 Description : Sort random integers from stdin with a binary tree
 ============================================================================
 */

#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	TreeNode* root = NULL;

	int num;
	while (scanf("%d", &num) > -1) {
		root = insertNode(root, num);
	}

	printInorder(root);
	printf("\n");
	destroyTree(root);
	return EXIT_SUCCESS;
}

