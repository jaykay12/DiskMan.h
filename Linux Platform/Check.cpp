#include <iostream>
#include "DiskMan.h"

using namespace std;

int main()
{
	int choice;
	cout<<"\t\t *********** Sample program illustrating various algorithms of Disk Scheduling *********";
	cout<<"\n Option 1: FCFS \n";
	cout<<"\n Provide Suitable Choice";
	cin>>choice;

	switch(choice)
	{
		case 1: FCFS(); break;
		default: cout<<"\n Invalid Choice";
	}
	return 0;
}