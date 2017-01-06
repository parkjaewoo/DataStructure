#pragma once
#include "BinaryNode.h"
#include "CircularQueue.h"
class BinaryTree: public BinaryNode
{
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


	void levelorder(){
		printf("\n levelorder    : ");
		if(!isEmpty()){
			CircularQueue q;
			q.enqueue(root);
			while(!q.isEmpty()){
				BinaryNode* n = q.dequeue();
				if(n != NULL){
					printf(" [%c] ", n->getData());
					q.enqueue(n->getLeft());
					q.enqueue(n->getRight());
				}
			}
		}
		printf("\n");
	
	}


	//void inorder(){printf("\n inorder   : "); inorder(root);}
	/*void inorder(BinaryNode* node){
		if(node != NULL){
			if(node->getLeft() != NULL) inorder(node->getLeft());
			printf(" [%c] ", node->getData());
			if(node->getRight() != NULL) inorder(node->getRight());
		}
	}*/

	//void preorder(){printf("\n preorder  : "); preorder(root);}
	/*void preorder(BinaryNode* node){
		if(node != NULL){
			printf(" [%c] ", node->getData());
			if(node->getLeft() != NULL) preorder(node->getLeft());
			if(node->getRight() != NULL) preorder(node->getRight());
		}
	}*/

	//void postorder(){printf("\n postorder : "); postorder(root);}
	/*void postorder(BinaryNode* node){
		if(node != NULL){
			if(node->getLeft() != NULL){postorder(node->getLeft());}
			if(node->getRight() != NULL){postorder(node->getRight());}
			printf(" [%c] ", node->getData());
		}
	}*/



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

