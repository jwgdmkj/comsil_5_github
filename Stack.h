#ifndef __STACK_H__
#define __STACK_H__

#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

//this: 객체를 가리키는 포인터변수
//LinkedList class를 상속받음
//delete만 재정의
template <typename T>
class Stack : public LinkedList<T>{
	public:
		bool Delete (T &element){

//Node<T> *first			//first가 0이면 false반환
//this: 상속한 링크드리스트의 것들을, 오직 Stack내에서만 사용하겠다. 
//즉 상속한 것들의 요소들을 여기에서 쓸라면 this 써야됨 
			if(this->first==NULL)
				return false;

			//맨앞에거 삭제
/* element=current->data; delete current; current_size--; */
			// LinkedList와 달리 Stack은 current가 가리키는 곳을 삭제
			else
			element=this->first->data;  //element=current->data
			Node<T> * ptr=this->first; //해당 first를 가리키는 node형 포인터생성
		
			if(this->first->link==NULL)
		           this->first=this->first->link;  //first가, 자기 다음것을가리킴
			//else 
			//{
		//		printf("더 이상 남아있는 수가 없습니다"); 
		//	}			
			delete ptr;//ptr에 할당된 this->first메모리 반환
			this->current_size--; //current_size--;
				
			return true;
			}
};

#endif
