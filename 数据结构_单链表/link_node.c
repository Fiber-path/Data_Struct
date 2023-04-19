#include "stdio.h"
# include <malloc.h>

typedef int datetype;
typedef struct link_node {
	datetype data;
	struct link_node* next;
}node;

node* init(node *head) {
	head = (node*)malloc(sizeof(node));
	if (NULL == head) return NULL;
	head->next = NULL;
	return head;
}

void print(node * head) {
	node* p;
	p = head->next;
	if (!p) printf("\n带头节点的单链表是空的！");
	else {
		printf("\n带头节点的单链表节点的各个值为：\n");
		while (p) {
			if (p == 0xcccccccccccccccc) break;
			printf("%5d", p->data);
			p = p->next;
		}
	}
}

node* find(node* head, int i) {
	int j = 0;
	node* p = head;
	if (i < 0) {
		printf("\n带头节点的单链表中不存在第%d个节点！", i);
		return NULL;
	}
	else {
		if (i == 0) return p;
	}
	while (p && i != j) {
		p = p->next;
		j++;
	}
	return p;
}

node* insert(node* head, datetype x, int i) {
	node* p, * q;
	q = find(head, i);
	if (!q) {
		printf("\n带头节点的单链表中不存在第%d个节点！插入失败！", i);
		return head;
	}
	p = (node*)malloc(sizeof(node));
	if (NULL == p) return NULL;
	p->data = x;
	p->next = q->next;
	q->next = p;
	return head;
}


node* reverse(node* head,node* head2) {
	node* p;
	p = head->next;
	while (p) {
		if (p == 0xcccccccccccccccc) break;
		insert(head2, p->data, 0);
		p = p->next;
	}
	printf("\n------------------------反转后的单链表------------------------");
	return head2;
}



int main() {
	node head1,head2;
	init(&head1);
	init(&head2);
	insert(&head1, 4, 0);
	insert(&head1, 169, 1);
	insert(&head1, 74, 1);
	insert(&head1, 164, 1);
	insert(&head1, 55, 2);
	insert(&head1, 74, 3);
	insert(&head1, 21, 4);
	print(&head1);
	reverse(&head1, &head2);
	print(&head2);
}