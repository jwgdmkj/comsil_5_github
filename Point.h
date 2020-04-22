#ifndef __POINT_H__
#define __POINT_H__

typedef struct _point {
	int xpos;
	int ypos;
}Point;

//point 변수의 xpos ypos 설정
void SetPointPos(Point*ppos, int xpos, int ypos);

//point변수의 xpos ypos 정보 출력
void ShowPointPos(Point*ppos);

//두 point 변수 비교
int PointComp(Point *pos1, Point*pos2);

#endif