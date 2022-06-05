#include "cQueueS.h"

int main(void) {
	QueueType* cQ = createCQueue();	//큐 생성
	element data;
	printf("\n ***** 원형 큐 연산 *****\n");
	printf("\n삽입 A >> ");	enCQueue(cQ, 'A');	printCQ(cQ);
	printf("\n삽입 B >> ");	enCQueue(cQ, 'B');	printCQ(cQ);
	printf("\n삽입 C >> ");	enCQueue(cQ, 'C');	printCQ(cQ);
	data = peekCQ(cQ);	printf("\tpeek item : %c\n", data);
	printf("\n삭제 >> ");	data = deCQueue(cQ);	printCQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n삭제 >> ");	data = deCQueue(cQ);	printCQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n삭제 >> ");	data = deCQueue(cQ);	printCQ(cQ);
	printf("\t삭제 데이터 : %c", data);
	printf("\n삽입 D >> ");	enCQueue(cQ, 'D');	printCQ(cQ);
	printf("\n삽입 E >> ");	enCQueue(cQ, 'E');	printCQ(cQ);

	getchar();
	return 0;
}