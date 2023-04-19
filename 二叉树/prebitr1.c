#include "stdio.h"
#include "malloc.h"
#include "bilink1.h"

bintree createbintree() {
	char ch;
	bintree t;
	if ((ch = getchar()) == '#') {
		t = NULL;
	}
	else {
		t = (bintnode*)malloc(sizeof(bintnode));
		if (t) {
			t->data = ch;
			t->lchild = createbintree();
			t->rchild = createbintree();
		}
	}
	return t;
}

void preorder(bintree t) {   /*前序遍历二叉树递归算法的实现*/
	if (t) {
		printf("%c", t->data);    /*输出当前节点的值*/
		preorder(t->lchild);   /*遍历左节点*/
		preorder(t->rchild);  /*遍历右节点*/
	}
}

int main() {
	bintree t;
	t = createbintree();
	preorder(t);
}