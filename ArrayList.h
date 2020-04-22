#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1
#define FALSE	0 //  //참거짓을 표현하기 위한 매크로정의

/*** ArrayList의 정의 ****/
#define LIST_LEN	100
typedef int LData;   ////LData에 대한 typedef 선언

typedef struct __ArrayList   //배열기반 리스트를 정의한 구조체
{
	LData arr[LIST_LEN];   //리스트의 저장소인 배열
	int numOfData;
	int curPosition;
} ArrayList;


/*** ArrayList와 관련된 연산들 ****/
typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif