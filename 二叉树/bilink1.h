#pragma once
/*
��������ʽ�洢��ͷ�ļ�
*/

typedef char datatype;

typedef struct node {          /*�������ڵ�����*/
	datatype data;
	struct node* lchild, * rchild;
} bintnode;

typedef bintnode* bintree;
bintree root;      /*ָ����������ڵ��ָ��*/