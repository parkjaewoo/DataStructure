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
		isFull() ? error("���� �뷮�� �ʰ��Ǿ����ϴ�") : data[++top] = item;
		/*if(isFull()) error("���� �뷮�� �ʰ��Ǿ����ϴ�");
		else{
			//top++;
			//data[top] = item;
			data[++top] = item;
		}*/
	}
	int pop(){
		//isEmpty() ? error("���� ���� ����") : return data[top--]; //��ȯ�̱� ������ ������� �ƴϴ�.
		if(isEmpty()) error("���� ���� ����");
		
		return data[top--];
	}

	int peek(){
		if(isEmpty()) error("���� ���� ����");
		else return data[top]; //�������� �ʰ� ��� ��ȯ
	}
	
	void display(){
		printf("[���� �׸��� �� = %2d] ==>  ", top+1); //top++�̳� ++top�� �ȉ�.
		for(int i = 0; i<=top ; i++)
			printf("<%d>", data[i]);
		printf("\n");
	}

};

