#include "CircleDequeue.h"


void main(){
	CircleDequeue deq;
	for(int i = 1; i< 10 ; i++){
		if(i%2) deq.addFront(i);
		else deq.addRear(i);
	}
	deq.display();
	deq.deleteFront();
	deq.deleteRear();
	deq.deleteFront();
	deq.display();
	getchar();
	getchar();
}