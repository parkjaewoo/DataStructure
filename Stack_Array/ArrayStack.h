#include <stdio.h>
#include <stdlib.h>
#pragma once

inline void error(char *message){
	printf("%s\n", message);
	exit(1);
}
const int MAX_STACK_SIZE = 20;

class ArrayStack
{
	int data[MAX_STACK_SIZE];
	int top;
public:
	ArrayStack(){top = -1;}	
	//~ArrayStack(void);
	bool isEmpty(){return top == -1;}
	bool isFull(){return top == MAX_STACK_SIZE-1;}
	void push(int item){
		isFull() ? error("스택 용량이 초과되었습니다") : data[++top] = item;
		/*if(isFull()) error("스택 용량이 초과되었습니다");
		else{
			//top++;
			//data[top] = item;
			data[++top] = item;
		}*/
	}
	int pop(){
		//isEmpty() ? error("스택 공백 에러") : return data[top--]; //반환이기 때문에 산술식이 아니다.
		if(isEmpty()) error("스택 공백 에러");
		
		return data[top--];
	}

	int peek(){
		if(isEmpty()) error("스택 공백 에러");
		else return data[top]; //삭제하지 않고 요소 반환
	}
	
	void display(){
		printf("[스택 항목의 수 = %2d] ==>  ", top+1); //top++이나 ++top은 안됌.
		for(int i = 0; i<=top ; i++)
			printf("<%d>", data[i]);
		printf("\n");
	}

};

