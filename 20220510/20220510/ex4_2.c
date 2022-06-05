#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main() {
	linkedList_h* L;
	listNode* p;
	L = createLinkedList_h();

	printf("(1) 리스트에 [월], [수], [일] 노드 삽입하기! \n");
	insertLastNode(L, "월");
	insertLastNode(L, "수");
	insertLastNode(L, "일");
	printList(L);

	printf("\n(2) 리스트에서 [수] 노드 탐색하기! \n");
	p = searchNode(L, "수");
	if (p == NULL) printf("찾는 데이터가 없습니다.\n");
	else printf("[%s]를 찾았습니다.\n", p->data);

	printf("\n(3) 리스트의 [수] 뒤에 [금] 노드 삽입하기! \n");
	insertMiddleNode(L, p, "금");
	printList(L);

	printf("\n(4) 리스트에서 [일] 노드 삭제하기! \n");
	p = searchNode(L, "일");		//삭제할 노드 위치 p를 찾음
	deleteNode(L, p);			//포인터 p 노드 삭제
	printList(L);

	printf("\n(5) 리스트 순서를 역순으로 바꾸기! \n");
	reverse(L);
	printList(L);

	freeLinkedList_h(L);	//리스트의 메모리 해제
	getchar();

	return 0;
}

/*
//--------------------------------더블 포인터--------------------------------------

int main() {
	listNode* head;
	listNode* p;
	head = NULL;

	printf("(1) 리스트에 [월], [수], [일] 노드 삽입하기! \n");
	insertLastNode(&head, "월");
	insertLastNode(&head, "수");
	insertLastNode(&head, "일");
	printList(&head);

	printf("\n(2) 리스트에서 [수] 노드 탐색하기! \n");
	p = searchNode(&head, "수");
	if (p == NULL) printf("찾는 데이터가 없습니다.\n");
	else printf("[%s]를 찾았습니다.\n", p->data);

	printf("\n(3) 리스트의 [수] 뒤에 [금] 노드 삽입하기! \n");
	insertMiddleNode(&head, p, "금");
	printList(&head);

	printf("\n(4) 리스트에서 [일] 노드 삭제하기! \n");
	p = searchNode(&head, "일");		//삭제할 노드 위치 p를 찾음
	deleteNode(&head, p);			//포인터 p 노드 삭제
	printList(&head);

	printf("\n(5) 리스트 순서를 역순으로 바꾸기! \n");
	reverse(&head);
	printList(&head);

	freeLinkedList_h(&head);	//리스트의 메모리 해제
	getchar();

	return 0;
}
*/