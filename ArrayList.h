#ifndef __ARRAY_LIST_H__
#define __ARRAY_LIST_H__

#define TRUE	1
#define FALSE	0 //  //�������� ǥ���ϱ� ���� ��ũ������

/*** ArrayList�� ���� ****/
#define LIST_LEN	100
typedef int LData;   ////LData�� ���� typedef ����

typedef struct __ArrayList   //�迭��� ����Ʈ�� ������ ����ü
{
	LData arr[LIST_LEN];   //����Ʈ�� ������� �迭
	int numOfData;
	int curPosition;
} ArrayList;


/*** ArrayList�� ���õ� ����� ****/
typedef ArrayList List;

void ListInit(List * plist);
void LInsert(List * plist, LData data);

int LFirst(List * plist, LData * pdata);
int LNext(List * plist, LData * pdata);

LData LRemove(List * plist);
int LCount(List * plist);

#endif