#include <stdio.h>
#pragma once
class Node
{
	int data;
	Node* link;


public:
	Node(int val = 0): data(val), link(NULL){}//data = val; link = NULL;}
	Node* getLink(){return link;}
	void setLink(Node* next){link = next;}
	void display(){printf("<%2d>", data);}

};

