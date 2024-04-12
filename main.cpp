#include <iostream>
#include "classes.h"
#include <queue>
#include <time.h>

using namespace std;


int main()
{
	// call to remove from stack
	linkList lList;
	lList.removestack();
	
		for (int i = 0; i < 100; i++)
		{
			lList.insert(rand() % 100);
		}
	
	lList.display();
	lList.demoPrev();

	lList.removestack();
	lList.display();

	// call to remove from queue
	lList.removequeue();
	for (int i = 0; i < 100; i++)
	{
		lList.insert(rand() % 100);
	}
	lList.display();
	lList.demoPrev();
	lList.removequeue();
	lList.display();

	return 0;
}