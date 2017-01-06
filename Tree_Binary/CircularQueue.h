#pragma once
#include "BinaryNode.h"
#include <stdlib.h>

inline void error(char* str){
	fprintf(stderr,"%s\n", str);
	exit(1);
};

#define MAX_QUEUE_SIZE 100

class CircularQueue
{
	int front;
	int rear;
	BinaryNode* data[MAX_QUEUE_SIZE];
public:

	CircularQueue(){front = rear = 0;}
	bool isEmpty(){return front==rear;}
	bool isFull(){return (rear+1)%MAX_QUEUE_SIZE == front;}

	void enqueue(BinaryNode* n){
		if(isFull()) error("��ȭ ����");
		else{
			rear = (rear+1) % MAX_QUEUE_SIZE;
			data[rear] = n;
		}
	}

	BinaryNode* dequeue(){
		if(isEmpty()) error("���� ����");
		else{
			front = (front + 1) % MAX_QUEUE_SIZE;
			return data[front];
		}
	}
};

