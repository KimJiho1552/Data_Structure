#include "LinkedQueue.h"

int main(void) {
	LQueueType* LQ = createLinkedQueue(); //���� ť ����
	element data;
	printf("***** ���� ť ���� *****\n");
	printf("\n���� A >> ");	enLQueue(LQ, 'A');	printLQ(LQ);
	printf("\n���� B >> ");	enLQueue(LQ, 'B');	printLQ(LQ);
	printf("\n���� C >> ");	enLQueue(LQ, 'C');	printLQ(LQ);
	data = peekLQ(LQ);	printf("\tpeek item : %c\n", data);
	printf("\n���� >> ");	data = deLQueue(LQ);	printLQ(LQ);
	printf("\t���� ������ : %c", data);
	printf("\n���� >> ");	data = deLQueue(LQ);	printLQ(LQ);
	printf("\t���� ������ : %c", data);
	printf("\n���� >> ");	data = deLQueue(LQ);	printLQ(LQ);
	printf("\t���� ������ : %c", data);
	printf("\n���� D >> ");	enLQueue(LQ, 'D');	printLQ(LQ);
	printf("\n���� E >> ");	enLQueue(LQ, 'E');	printLQ(LQ);

	getchar();
	return 0;
}