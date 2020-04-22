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
	//큐의 삽입방식은 마지막에 넣기
}

void Dequeue(Queue * pq)
{
	DQRemoveFirst(pq);
}

Data QPeek(Queue * pq)
{
	return DQGetFirst(pq);
}

//이렇게, 이미 만들어진 a함수를 이용해 b를 만드는 경우,
//b의 함수가 처리하는 내용에 a함수를 집어넣으면 된다.