#include "DequeBaseQueue.h"

void QueueInit(Queue * pq)
{
	DequeInit(pq);
}

int QIsEmpty(Queue *pq)
{
	return DQIsEmpty(pq);
}

void Enqueue(Queue * pq, Data data)
{
	DQAddLast(pq, data);
	//ť�� ���Թ���� �������� �ֱ�
}

void Dequeue(Queue * pq)
{
	DQRemoveFirst(pq);
}

Data QPeek(Queue * pq)
{
	return DQGetFirst(pq);
}

//�̷���, �̹� ������� a�Լ��� �̿��� b�� ����� ���,
//b�� �Լ��� ó���ϴ� ���뿡 a�Լ��� ��������� �ȴ�.