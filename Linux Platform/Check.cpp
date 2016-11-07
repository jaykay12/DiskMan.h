#include <iostream>
#include "DiskMan.h"

using namespace std;

int main()
{
	int choice;
	cout<<"\t\t *********** Sample program illustrating various algorithms of Disk Scheduling *********";
	cout<<"\nOption 1: FCFS \nOption 2: SSTF \n";
	cout<<"\n Provide Suitable Choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1: FCFS(); break;
		case 2: SSTF(); break;
		default: cout<<"\n Invalid Choice";
	}
	return 0;
}