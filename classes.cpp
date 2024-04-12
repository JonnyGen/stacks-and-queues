#include <iostream>
#include "classes.h"
#include <time.h>

using namespace std;
// head null
linkList:: linkList()
{
	head = NULL;

}
// display current
void linkList::display()
{
	node* curr = head;
	while (curr)
	{
		cout << "node =" << curr->data;
		curr = curr->next;

	}

}
// insert number
void linkList::insert(int num)
{
	// create node
	node* newnode = new node();
	newnode->data = num;
	if (head == NULL)
	{
	// time insert
		clock_t start, end;
		start = clock();
		newnode->prev = NULL;
		newnode->next = head;
		head = newnode;
		end = clock();
		cout << "time" << (end - start) << endl;
	}
	else
	{
		newnode->next = head;
		head->prev = newnode;
		head = newnode;
	}


}
// previous node
void linkList::demoPrev()
{
	node* curr = head;
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	while (curr->prev)
	{
		cout << "prev  - node =" << curr->prev
			<< endl;
		curr = curr->prev;
	}
	cout << "prev  - node =" << curr->prev<< endl;
}

//remove stack
void linkList::removestack()
{
	if (head != NULL)
	{
		//timing for remove from stack
		clock_t start, end;
		start = clock();
		node* curr = head;
		cout << head->data << "removed in a stack" << endl;
		head = head->next;
		head->prev = NULL;
		end = clock();
		cout << "time" << (end - start) << endl;
	}
	else
	{
		cout << "empty list - did not remove" << endl;
	}

}
//remove from queue
void linkList::removequeue()
{

node* curr = head;
while (curr->next != NULL)
{
	curr = curr->next;
}
	if (head != NULL)
    {
		//time for remove from queue
		clock_t start, end;
		start = clock();
	node* curr = head;
	cout << head->data << "remove from que" << endl;
		head = head->next;

		end = clock();
		cout << "time" << (end - start) << endl;
     }
	 else
	{
		cout << "empty list - did not remove" << endl;
	}
}