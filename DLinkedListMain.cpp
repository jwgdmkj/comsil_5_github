#include <stdio.h>
#include "DLinkedList.h"

int main(void) {
	//리스트 생성 및 초기화//
	List list;
	int data;
	ListInit(&list);

	//5개 데이터 저장
	LInsert(&list, 11); LInsert(&list, 22);
	LInsert(&list, 33); LInsert(&list, 44);
	LInsert(&list, 55);

	//저장된 데이터 전체 출력
	printf("현 데이터 갯수- %d \n", LCount(&list));

	if (LFirst(&list, &data)) {
		printf("%d", data);

		while (LNext(&list, &data))
			printf("%d", data);
	}
	printf("\n\n");

	//숫자 22
}

