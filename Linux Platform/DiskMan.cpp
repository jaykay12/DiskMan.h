#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "DiskMan.h"

using namespace std;

void FCFS()
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
}

void SSTF()
{
	int queue[20],tempQueue[20],num,HeadInitial,SeekCylinder=0;
	float AverageSeekTime;
	cout<<"Enter Number of Input Sequences(Under 20): "<<endl;
	cin>>num;

	cout<<"Enter Input Sequence: "<<endl;
	for(int i=0;i<num;i++)
		cin>>queue[i];

	cout<<"Enter Initial Head position :"<<endl;
	cin>>HeadInitial;

	for(int j=0;j<num;j++)
	{
		for(int k=0;k<num;k++)
		{
			tempQueue[k]=abs(queue[k]-HeadInitial);
		}

		for(int k=0;k<num;k++)
		{
			for(int l=k+1;l<num;l++)
			{
				if(tempQueue[k] >= tempQueue[l])
				{
					int temp1 = tempQueue[k],temp2 = queue[k];
					tempQueue[k] = tempQueue[l];
					tempQueue[l] = temp1;
					queue[k] = queue[l];
					queue[l] = temp2;
				}
			}
		}

	cout<<"-->"<<queue[0];
	HeadInitial = queue[0];
	SeekCylinder += tempQueue[0];
	queue[0] = 9999;
	}

	AverageSeekTime = SeekCylinder/(float)num;

	cout<<"\n-----------------------------";
	cout<<"\n| Using SSTF Disc Scheduling |";
	cout<<"\n| Total Cylinders : "<<SeekCylinder<<"      |";
	cout<<"\n| Average Seek time : "<<AverageSeekTime<<"   |";
	cout<<"\n-----------------------------";
	cout<<"\n";
}