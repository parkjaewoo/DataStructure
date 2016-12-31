#pragma once
#include <cstdlib>
#include <stdio.h>

#define MAX_QUEUE_SIZE 20
inline void error(char* n){printf("%s",n); exit(1);}

class CircleQueue
{
protected:
	int data[MAX_QUEUE_SIZE];
	int front;
	int rear;


public:
	CircleQueue(){front = rear  = 0;};
	//~CircleQueue(void);
	bool isEmpty(){ return front == rear;}
	bool isFull(){return front == (rear+1) % MAX_QUEUE_SIZE;}

	void enqueue(int val){
		if(isFull()) error("ť ��ȭ ����");
		else{
			rear = (rear+1) % MAX_QUEUE_SIZE;
			data[rear] = val;
		}
	}

	int dequeue(){
		if(isEmpty()) error("ť ���� ����");
		else{
			front = (front+1)%MAX_QUEUE_SIZE;
			return data[front];
		}
	}

	int peek(){
		if(isEmpty()) error("ť ���� ����");
		return data[(front+1)%MAX_QUEUE_SIZE];}

	void display(){
		printf(" ť ����: " );
		int maxi = front<rear ? rear : rear+MAX_QUEUE_SIZE;
		for(int i = front+1; i <= maxi; i++)
			printf("[%2d] ", data[i%MAX_QUEUE_SIZE]);
		printf("\n");
		
		
	}


};