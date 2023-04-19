#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100

typedef int datatype;

typedef struct {
	datatype a[MAXSIZE];
	int size;
}sequence_list;

void init(sequence_list* slt) {
	/*
	��ʼ��˳�����
	*/
	slt->size = 0;
}

void input(sequence_list* L) {
	/*
	��ʼ��˳���
	*/
	datatype x;
	init(L);
	printf("������һ�����ݣ��ԡ�0����Ϊ������:\n");
	scanf_s("%d", &x);
	while (x) {
		L->a[L->size++] = x;
		scanf_s("%d", &x);
	}
}

void print(sequence_list* L) {
	/*
	���˳���
	*/
	int i;
	for (i = 0; i < L->size; i++) {
		printf("%d  ", L->a[i]);
		if ((i + 1) % 10 == 0)
			printf("\n");
	}
	printf("\n");
}

void append(sequence_list* L, datatype e, int position) {
	/*
	��˳������Ԫ�أ�eΪ��ӵ�Ԫ��
	*/
	int i;
	//printf("�밴˳���������λ���Լ������Ԫ�أ��м��ÿո�ָ�:\n");
	//scanf_s("%d %d", &position, &e);
	if (L->size == MAXSIZE) {
		printf("\n˳����������޷����룡"); exit(-1);
	}
	if (position < 0 || position > L->size + 1) {
		printf("\nָ��λ�ò����ڣ��޷����룡"); exit(-1);
	}
	else
	{
		for (i = L->size; i > position; i--) {
			L->a[i] = L->a[i - 1];
		}
		L->a[position] = e;
		L->size++;
		printf("��ӳɹ���\n");
	}
}

void reverse(sequence_list* L) {
	/*
	��ת˳���
	*/
	int t = 0;
	if (((L->size / 2) % 2) == 0) {  // �ж�˳����Ƿ���ż����
		for (int i = 0; i <= L->size / 2; i++) {
			t = L->a[i];
			L->a[i] = L->a[L->size - i - 1];
			L->a[L->size - i - 1] = t;
		}
	}
	else {  // ˳����������������
		for (int i = 0; i < L->size / 2; i++) {
			t = L->a[i];
			L->a[i] = L->a[L->size - i - 1];
			L->a[L->size - i - 1] = t;
		}
		printf("��ת˳���ɹ�\n");
	}
}

void main() {
	/*���������������*/
	sequence_list L1;
	input(&L1);
	reverse(&L1);
	//append(&L1);
	print(&L1);
}