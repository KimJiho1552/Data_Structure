#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "DoubleLinkedList.h"

//공백 이중 연결 리스트를 생성하는 연산
linkedList_h* createLinkedList_h(void) {
	linkedList_h* DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));	//헤드 노드 할당
	DL->head = NULL;		//공백 리스트이므로 NULL로 설정
	return DL;
}

//이중 연결 리스트를 순서대로 출력하는 연산
void printList(linkedList_h* DL) {
	listNode* p;
	printf("DL = (");

	p = DL->head;
	while (p != NULL) {
		printf("%s", p->data);
		p = p->rlink;
		if (p != NULL) printf(", ");
	}
	printf(")\n");
}

//pre 뒤에 노드를 삽입하는 연산
void insertNode(linkedList_h* DL, listNode* pre, char* x) {
	listNode* newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode->data, x);
	if (DL->head == NULL) {
		newNode->rlink = NULL;
		newNode->llink = NULL;
		DL->head = newNode;
	}
	else {
		newNode->rlink = pre->rlink;
		pre->rlink = newNode;
		newNode->llink = pre;
		if (newNode->rlink != NULL)	//삽입 자리에 다음 노드가 있는 경우
			newNode->rlink->llink = newNode;
	}
}

//이중 연결 리스트에서 old 노드를 삭제하는 연산
void deleteNode(linkedList_h* DL, listNode* old) {
	if ((DL->head == NULL) || (old == NULL)) return;	//공백 리스트인 경우 삭제 연산 중단, 삭제할 노드가 없는 경우 삭제 연산 중단

	else if (old->llink == NULL && old->rlink != NULL) {	//첫 번째 노드 삭제
		DL->head = old->rlink;
		old->rlink->llink = NULL;
	}
	else if (old->rlink == NULL && old->llink != NULL) {	//마지막 노드 삭제
		old->llink->rlink = NULL;
	}
	else if ((old->llink == NULL) && (old->rlink == NULL)) {	//노드가 하나일 때
		DL->head = NULL; //DL->head = old->rlink;
	}

	//else if ((old->llink == NULL) || (old->rlink == NULL)) {	//노드 하나 + 첫 번째 노드 삭제
	//	DL->head = old->rlink;
	//	if (old->rlink != NULL) {
	//		old->rlink->llink == NULL;
	//	}
	//}

	else {
		old->llink->rlink = old->rlink;
		old->rlink->llink = old->llink;
	}
	free(old);		//삭제 노드의 메모리 해제
}

//리스트에서 x 노드를 탐색하는 연산
listNode* searchNode(linkedList_h* DL, char* x) {
	listNode* temp;
	temp = DL->head;
	while (temp != NULL) {
		if (strcmp(temp->data, x) == 0) return temp;
		else temp = temp->rlink;
	}
	return temp;
}