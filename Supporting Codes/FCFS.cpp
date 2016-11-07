#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
	int queue[20],num,HeadInitial,SeekCylinder=0,diff,i;
	float AverageSeekTime;

	cout<<"Enter Number of Input Sequences(under 20): ";
	cin>>num;

	cout<<"Enter Input Sequence:\n";
	for(i=1;i<=num;i++)
		cin>>queue[i];

	cout<<"Enter Initial Head position: ";
	cin>>HeadInitial;

	queue[0]=HeadInitial;

	for(i=0;i<num;i++)
	{
		diff=abs(queue[i+1]-queue[i]);
		SeekCylinder += diff;
		cout<<" --> "<<queue[i];
	}

	AverageSeekTime = SeekCylinder/(float)num;
	cout<<"\n-----------------------------";
	cout<<"\n| Using FCFS Disc Scheduling |";
	cout<<"\n| Total Cylinders : "<<SeekCylinder<<"      |";
	cout<<"\n| Average Seek time : "<<AverageSeekTime<<"   |";
	cout<<"\n-----------------------------";

	cout<<"\n";
return 0;
}