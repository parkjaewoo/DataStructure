#pragma once
#include "BinaryTree.h"

class BinSrchTree:public BinaryTree
{
public:
	BinaryNode* search(int key){
		BinaryNode* node = searchRecur(root,key);
			if(node != NULL)
				printf(" 탐색 성공: 키값이 %d인 노드 = 0x%x\n");
			else
				printf("탐색 실패: 키값이 %d인 노드 없음\n", key);
			return node;
	}

	BinaryNode* searchRecur(BinaryNode *n, int key){
		if(n == NULL) return NULL;
		if(key == n->getData())
			return n;
		else if (key < n-> getData())
			return searchRecur(n->getLeft(),key);
		else
			return searchRecur(n->getRight(),key);
	}

	void insert(BinaryNode* n){
	
		if(n==NULL) return;
		if(isEmpty()) root=n;
		else insertRecur(root,n);
	}

	void insertRecur(BinaryNode* r, BinaryNode* n){
		if(n->getData() == r->getData()) return;
		else if(n->getData() < r->getData()){
			if(r->getLeft() == NULL)
				r->setLeft(n);
			else
				insertRecur(r->getLeft(),n);
		}
		else{
			if(r->getRight() == NULL)
				r->setRight(n);
			else
				insertRecur(r->getRight(),n);
		}
	}

	void remove(int key){
		if(isEmpty()) return;

		BinaryNode *parent = NULL;
		BinaryNode *node = root;
		while(node != NULL && node->getData() != key){
			parent = node;
			node = (key < node->getData()) ? node->getLeft() : node->getRight();}
		if(node == NULL){
			printf(" Error : key is not in the tree\n");
			return;
		}
		else remove(parent, node);

	}

	
	void remove(BinaryNode *parent, BinaryNode *node){
		if(node->isLeaf()){
			if(parent == NULL)
				parent ->setLeft(NULL);
			else
				parent->setRight(NULL);
		}

		else if(node->getLeft() == NULL || node->getRight()== NULL){
			BinaryNode *child = (node->getLeft() != NULL)
				? node->getLeft() : node->getRight();

			if(node == root) root = child;
			else{
				if(parent->getLeft() == node)
					parent->setLeft(child);
				else
					parent->setRight(child);
			}
		}

		else{
			BinaryNode* succp = node;
			BinaryNode* succ = node->getRight();
			while(succ -> getLeft() != NULL){
				succp = succ;
				succ = succ->getLeft();
			}
			if(succp->getLeft() == succ)
				succp->setLeft(succ->getRight());
			else
				succp -> setData(succ->getData());
			node->setData(succ ->getData());
			node = succ;

		}
	delete node;
	}
	
	

};

