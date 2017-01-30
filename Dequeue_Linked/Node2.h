#include <stdio.h>
#pragma once
class Node2
{
protected:
	Node2* next;
	Node2* prev;
	int data;
public:

	Node2(int val = 0):data(val), next(NULL),prev(NULL){}

	Node2* getPrev(){return prev;}
	Node2* getNext(){return next;}
	void setPrev(Node2* p){prev = p;}
	void setNext(Node2* n){next = n;}
	bool hasData(int val){return data==val;}
	void display(){printf(" [%d] ", data);}

	void insertNext(Node2* n){
		n->prev = this;
		n->next = next;
		if(next !=NULL) next->prev = n;
		next = n;
	}

	Node2* remove(){
		if(prev != NULL) prev->next = next;
		if(next != NULL) next->prev = prev;
		return this;
	}

};

