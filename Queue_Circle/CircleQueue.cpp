#include "CircleQueue.h"


void main(){
	CircleQueue que;
	for(int i = 1; i< 10; i++)
		que.enqueue(i);

	que.display();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.dequeue();
	que.display();
	getchar();
	getchar();

}