#include "Node.h"

class LinkedQueue
{
	Node* front;
	Node* rear;
public:
	LinkedQueue() : front(NULL),rear(NULL){}
	~LinkedQueue(){while(isEmpty()) delete dequeue();}

	bool isEmpty(){return front == NULL;}

	void enqueue(Node* p){
		isEmpty()? front = rear = p : rear->setLink(p); rear = p;
	}

	Node* dequeue(){
		if (isEmpty()) return NULL;
		Node* p = front;
		front = front->getLink();
		return p;
	}

	Node* peek(){return front;}

	void display(){
		printf(" Å¥ ³»¿ë : ");
		for(Node* i = front; i!=NULL; i = i->getLink())
			i->display();
		printf("\n");
	}

};

