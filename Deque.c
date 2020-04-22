#include <stdio.h>
#include <stdlib.h>
#include "Deque.h"

void DequeInit(Deque * pdeq)
{
	pdeq->head = NULL;
	pdeq->tail = NULL;
}

int DQIsEmpty(Deque * pdeq)
{
	if (pdeq->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void DQAddFirst(Deque * pdeq, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = pdeq->head;
	//�� �����ϴ°�?

	if (DQIsEmpty(pdeq))
		pdeq->tail = newNode;
	else
		pdeq->head->prev = newNode;

	newNode->prev = NULL;
	pdeq->head = newNode;
}

void DQAddLast(Deque* pdeq, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->prev = pdeq->tail;
	
	if (DQIsEmpty(pdeq))
		pdeq->head = newNode;
	else
		pdeq->tail->next = newNode;

	newNode->next = NULL;
	pdeq->tail = newNode;
	//���������� �ƴϹǷ�, newNode�� prev �Ǵ� next�� ���ϼ��ۿ� ����
	//��������, �߰��� ���� head �Ǵ� tail�� �ȴ�.
}

Data DQRemoveFirst(Deque* pdeq)
{
	Node *rnode = pdeq->head;
	Data rdata = pdeq->head->data;
	
	if (DQIsEmpty(pdeq))
	{
		printf("Deque memory error");
		exit(-1);
	}

	pdeq->head = pdeq->head->next;
	free(rnode);

	if (pdeq->head == NULL)
		pdeq->tail = NULL;
	else
		pdeq->head->prev = NULL;
	//������ ���� prev�Ǵ� tail �ʱ�ȭ�� �ʼ�

	return rdata;
}

Data DQRemoveLast(Deque *pdeq)
{
	Node * rnode = pdeq->tail;
	Data rdata = pdeq->tail->data;

	if (DQIsEmpty(pdeq))
	{
		printf("Deque memory error");
		exit(-1);
	}

	pdeq->tail = pdeq->tail->prev;
	free(rnode);

	if (pdeq->tail == NULL)
		pdeq->head == NULL;
	else
		pdeq->tail->next = NULL;

	return rdata;
}

Data DQGetFirst(Deque *pdeq)
{
	if (DQIsEmpty(pdeq))
	{
		printf("memory error");
		exit(-1);
	}

	return pdeq->head->data;
}

Data DQGetLast(Deque *pdeq)
{
	if (DQIsEmpty(pdeq))
	{
		printf("memory error");
		exit(-1);
	}

	return pdeq->tail->data;
}