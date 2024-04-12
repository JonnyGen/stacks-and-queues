#pragma once
#include <time.h>
//create a class node
class node {
public:
	node* next;
	node* prev;
	node* head;
	node* tail;

	int data;

};
//create class linklist
class linkList {
private:
	node* head;
	int lenth;
public:
	linkList();
	void insert(int data);
		void display();
		void demoPrev();
		void removestack();
		void removequeue();
		
};

	