#include "CircleQueue.h"

#pragma once
class CircleDequeue: public CircleQueue
{
public:
	CircleDequeue(){}

	int deleteFront(){return dequeue();}
	void addRear(int e){enqueue(e);}
	int getFront(){return peek();}

	void addFront(int e){
		if(isFull()) error("�� ��ȭ");
		else{
			data[front] = e;
			front = (front -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
		}
	}


	int deleteRear(){
		if(isEmpty()) error("�� ����");
		else{
		int e = data[rear];
		rear = (rear -1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
		return e;
		}
	}

	int getRear(){
		if(isEmpty()) error("�� ���� ");
		else return data[rear];
	}

	void display(){
		printf("�� ���� : ");
		int maxi = front<rear ? rear : rear+MAX_QUEUE_SIZE;
		for(int i = front+1 ; i <= maxi ; i++)
			printf(" [%d] ", data[i%MAX_QUEUE_SIZE]);
		printf("\n");
	}
	
};

