#include "LinkedStack.h"

void main(){

	LinkedStack stack;

	stack.push(new Node(2015130007, "ȫ�浿","��ǻ�Ͱ��а�"));
	stack.push(new Node(2015130100, "�̼���","�����а�"));
	stack.push(new Node(2015130135, "Ȳ��","���а�"));
	stack.display();

	Node* node = stack.pop();
	printf("[Pop �׸�]\n");
	node->display();
	printf("\n");
	delete node;
	stack.display();
	getchar();
	getchar();


}
