#include "tree.h"
#include <stdlib.h>

static TreeNode* constructNode(int val) {
	TreeNode* tn;
	tn = malloc(sizeof(TreeNode));
	tn->left = NULL;
	tn->right = NULL;
	tn->value = val;
	return tn;
}

TreeNode* insertNode(TreeNode* tn, int val) {
	if (tn == NULL) {
		return constructNode(val);
	}
	if (val < (tn->value)) {
		tn->left = insertNode(tn->left, val);
	} else {
		tn->right = insertNode(tn->right, val);
	}
	return tn;
}

static void printNode(TreeNode *tn) {
	printf("%-4d ", tn->value);
}

void printInorder(TreeNode* tn) {
	static int counter = 1;
	if (tn == NULL) {
		return;
	}

	printInorder(tn->left);
	printNode(tn);
	if (counter % 20 == 0) {
		printf("\n");
	}
	counter++;
	printInorder(tn->right);
}

void destroyTree(TreeNode* n) {
	if (n == NULL) {
		return;
	}
	destroyTree(n->left);
	destroyTree(n->right);
	free(n);
}
