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

void preorder(bintree t) {   /*ǰ������������ݹ��㷨��ʵ��*/
	if (t) {
		printf("%c", t->data);    /*�����ǰ�ڵ��ֵ*/
		preorder(t->lchild);   /*������ڵ�*/
		preorder(t->rchild);  /*�����ҽڵ�*/
	}
}

int main() {
	bintree t;
	t = createbintree();
	preorder(t);
}