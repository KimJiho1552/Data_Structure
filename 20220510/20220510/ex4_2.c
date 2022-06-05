#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main() {
	linkedList_h* L;
	listNode* p;
	L = createLinkedList_h();

	printf("(1) ����Ʈ�� [��], [��], [��] ��� �����ϱ�! \n");
	insertLastNode(L, "��");
	insertLastNode(L, "��");
	insertLastNode(L, "��");
	printList(L);

	printf("\n(2) ����Ʈ���� [��] ��� Ž���ϱ�! \n");
	p = searchNode(L, "��");
	if (p == NULL) printf("ã�� �����Ͱ� �����ϴ�.\n");
	else printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);

	printf("\n(3) ����Ʈ�� [��] �ڿ� [��] ��� �����ϱ�! \n");
	insertMiddleNode(L, p, "��");
	printList(L);

	printf("\n(4) ����Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(L, "��");		//������ ��� ��ġ p�� ã��
	deleteNode(L, p);			//������ p ��� ����
	printList(L);

	printf("\n(5) ����Ʈ ������ �������� �ٲٱ�! \n");
	reverse(L);
	printList(L);

	freeLinkedList_h(L);	//����Ʈ�� �޸� ����
	getchar();

	return 0;
}

/*
//--------------------------------���� ������--------------------------------------

int main() {
	listNode* head;
	listNode* p;
	head = NULL;

	printf("(1) ����Ʈ�� [��], [��], [��] ��� �����ϱ�! \n");
	insertLastNode(&head, "��");
	insertLastNode(&head, "��");
	insertLastNode(&head, "��");
	printList(&head);

	printf("\n(2) ����Ʈ���� [��] ��� Ž���ϱ�! \n");
	p = searchNode(&head, "��");
	if (p == NULL) printf("ã�� �����Ͱ� �����ϴ�.\n");
	else printf("[%s]�� ã�ҽ��ϴ�.\n", p->data);

	printf("\n(3) ����Ʈ�� [��] �ڿ� [��] ��� �����ϱ�! \n");
	insertMiddleNode(&head, p, "��");
	printList(&head);

	printf("\n(4) ����Ʈ���� [��] ��� �����ϱ�! \n");
	p = searchNode(&head, "��");		//������ ��� ��ġ p�� ã��
	deleteNode(&head, p);			//������ p ��� ����
	printList(&head);

	printf("\n(5) ����Ʈ ������ �������� �ٲٱ�! \n");
	reverse(&head);
	printList(&head);

	freeLinkedList_h(&head);	//����Ʈ�� �޸� ����
	getchar();

	return 0;
}
*/