#include <stdio.h>
#include "DLinkedList.h"

int main(void) {
	//����Ʈ ���� �� �ʱ�ȭ//
	List list;
	int data;
	ListInit(&list);

	//5�� ������ ����
	LInsert(&list, 11); LInsert(&list, 22);
	LInsert(&list, 33); LInsert(&list, 44);
	LInsert(&list, 55);

	//����� ������ ��ü ���
	printf("�� ������ ����- %d \n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d", data);

		while (LNext(&list, &data))
			printf("%d", data);
	}
	printf("\n\n");

	//���� 22
}

