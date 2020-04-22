#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point {
	int xpos;
	int ypos;
}Point;

//point ������ xpos ypos ����
void SetPointPos(Point*ppos, int xpos, int ypos);

//point������ xpos ypos ���� ���
void ShowPointPos(Point*ppos);

//�� point ���� ��
int PointComp(Point *pos1, Point*pos2);

#endif