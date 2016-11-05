#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "DiskMan.h"

using namespace std;

void FCFS()
{
	int queue[20],num,HeadInitial,MaxRange,SeekCylinder=0,diff,i;
	float AverageSeekTime;

	cout<<"Enter Max Range of Disk: ";
	cin>>MaxRange;
	cout<<"Enter Number of Input Sequences(under 20): ";
	cin>>num;

	cout<<"Enter Input Sequence: ";
	for(i=1;i<=num;i++)
		cin>>queue[i];

	cout<<"Enter Initial Head position: ";
	cin>>HeadInitial;

	queue[0]=HeadInitial;

	for(i=0;i<num;i++)
	{
		diff=abs(queue[i+1]-queue[i]);
		SeekCylinder += diff;
	}

	AverageSeekTime = SeekCylinder/(float)num;

	cout<<"\n Using FCFS Disc Scheduling";
	cout<<"\n Total Cylinders : "<<SeekCylinder;
	cout<<"\n Average Seek time :"<<AverageSeekTime;
	cout<<"\n";
}