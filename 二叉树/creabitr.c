///*根据前序遍历创建一颗给定的二叉树*/
//
//#include "stdio.h"
//#include "malloc.h"
//#include "bilink1.h"
//
//bintree createbintree() {
//	char ch;
//	bintree t;
//	if ((ch = getchar()) == '#') {
//		t = NULL;
//	}
//	else {
//		t = (bintnode*)malloc(sizeof(bintnode));
//		if (t) {
//			t->data = ch;
//			t->lchild = createbintree();
//			t->rchild = createbintree();
//		}
//	}
//	return t;
//}
//
//int main() {
//	createbintree();
//}