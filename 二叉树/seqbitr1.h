#pragma once
/*
��ȫ��������˳��洢��ͷ�ļ�
*/
#define MAXSIZE 20

typedef char datetype;

typedef struct {
	datetype data;
	int lchild, rchild;
}node;

node tree[MAXSIZE];
int n;   /*����ʵ�������ڵ�ĸ���*/
int root;  /*��Ÿ��ڵ���±�*/