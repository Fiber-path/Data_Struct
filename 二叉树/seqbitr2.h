#pragma once
/*
��˫��ָʾ�Ķ�����˳��洢��ͷ�ļ�
*/

constexpr auto MAXSIZE = 20;

typedef char datatype;

typedef struct {
	datatype data;
	int lchild, rchild;  /*���������Ů�±�*/
	int parent;   /*���˫�׽���±�*/
} node;

node tree[MAXSIZE];
int n;   /*����ʵ���������ĸ���*/
int root;   /*��Ÿ��ڵ���±�*/