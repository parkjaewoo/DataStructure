#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STRING 100
#pragma once
class Student
{
	int id;//�й�
	char name[MAX_STRING]; //�̸�
	char dept[MAX_STRING]; //�Ҽ��а�
public:
	Student(int i = 0, char* n = "", char* d=""){set(i,n,d);}
	void set(int i, char* n, char* d){
		id = i;
		strcpy(name,n);
		strcpy(dept,d);
	}

	void display(){
		printf(" �й�:%-15d ����:%-10s �а�:%-20s\n", id, name, dept); 
	}

	//~Student(void){}
};

