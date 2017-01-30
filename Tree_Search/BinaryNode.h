#include <stdio.h>
#pragma once
class BinaryNode
{
protected:
	int data;
	BinaryNode* left;
	BinaryNode* right;
public:

	BinaryNode(int item = 0,BinaryNode* l= NULL, BinaryNode* r = NULL): data(item), left(l), right(r){}
	bool isLeaf(){return right==left==NULL;}
	void setData(int item){data = item;}
	void setLeft(BinaryNode* l){left = l;}
	void setRight(BinaryNode* r){right = r;}
	int getData(){return data;}
	BinaryNode* getLeft(){return left;}
	BinaryNode* getRight(){return right;}

	void inorder(){
		if(left != NULL) left->inorder();
		printf(" [%d] ", data);
		if(right != NULL) right->inorder();
	}

	void preorder(){
		printf(" [%d] ", data);
		if(left != NULL) left->preorder();
		if(right != NULL) right->preorder();
	}

	void postorder(){
		if(left != NULL) left->postorder();
		if(right != NULL) right->postorder();
		printf(" [%d] ", data);
	}

};
