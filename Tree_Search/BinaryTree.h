#pragma once
#include "BinaryNode.h"
class BinaryTree: public BinaryNode
{
protected:
	BinaryNode* root;
public:
	BinaryTree():root(NULL){}
	void setRoot(BinaryNode* n){root = n;}
	BinaryNode* getRoot(){return root;}
	bool isEmpty(){return root==NULL;}

	void inorder(){
		printf(" \n inorder       : "); 
		if(!isEmpty()) root->inorder(); }

	void preorder(){
		printf("\n preorder      : ");
		if(!isEmpty()) root->preorder();
	}

	void postorder(){
		printf("\n postorder     : ");
		if(!isEmpty()) root->postorder();
	}



	int getCount() {return  isEmpty() ? 0 :  getCount(root);}
	int getCount(BinaryNode* n){
		if(n == NULL) return 0;
		return 1 + getCount(n->getLeft()) + getCount(n->getRight());
	}

	int getLeafCount(){return isEmpty() ? 0 : getLeafCount(root);}
	int getLeafCount(BinaryNode* n){
		if(n == NULL) return 0;
		if(isLeaf()) return 1;
		else{
			return getLeafCount(n->getLeft()) + getLeafCount(n->getRight());
		}
	}

	int getHeight(){return isEmpty() ? 0 : getHeight(root);}
	int getHeight(BinaryNode* n){
		if(n == NULL) return 0;
		int hLeft = getHeight(n->getLeft());
		int hRight = getHeight(n->getRight());
		return hLeft > hRight ? 1+hLeft : 1 + hRight;

	}
};

