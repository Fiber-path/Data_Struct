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
	初始化顺序表长度
	*/
	slt->size = 0;
}

void input(sequence_list* L) {
	/*
	初始化顺序表
	*/
	datatype x;
	init(L);
	printf("请输入一组数据，以“0”作为结束符:\n");
	scanf_s("%d", &x);
	while (x) {
		L->a[L->size++] = x;
		scanf_s("%d", &x);
	}
}

void print(sequence_list* L) {
	/*
	输出顺序表
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
	向顺序表添加元素，e为添加的元素
	*/
	int i;
	//printf("请按顺序输入添加位置以及所添加元素，中间用空格分隔:\n");
	//scanf_s("%d %d", &position, &e);
	if (L->size == MAXSIZE) {
		printf("\n顺序表已满，无法插入！"); exit(-1);
	}
	if (position < 0 || position > L->size + 1) {
		printf("\n指定位置不存在，无法插入！"); exit(-1);
	}
	else
	{
		for (i = L->size; i > position; i--) {
			L->a[i] = L->a[i - 1];
		}
		L->a[position] = e;
		L->size++;
		printf("添加成功！\n");
	}
}

void reverse(sequence_list* L) {
	/*
	反转顺序表
	*/
	int t = 0;
	if (((L->size / 2) % 2) == 0) {  // 判断顺序表是否是偶数个
		for (int i = 0; i <= L->size / 2; i++) {
			t = L->a[i];
			L->a[i] = L->a[L->size - i - 1];
			L->a[L->size - i - 1] = t;
		}
	}
	else {  // 顺序表是奇数个的情况
		for (int i = 0; i < L->size / 2; i++) {
			t = L->a[i];
			L->a[i] = L->a[L->size - i - 1];
			L->a[L->size - i - 1] = t;
		}
		printf("反转顺序表成功\n");
	}
}

void main() {
	/*主函数，程序入口*/
	sequence_list L1;
	input(&L1);
	reverse(&L1);
	//append(&L1);
	print(&L1);
}