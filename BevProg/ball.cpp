#include<math.h>
#include <unistd.h>
#include <iostream>

using namespace std;

int drawBall(int x,int y)
{
	for(int i=0;i<x;i++)
	cout<<"\n";

	for(int i=0;i<y;i++)
	cout<<" ";

	cout<<"O\n";

	return 0;
}

int main()
{
	int x=0,y=0;
	int width,height;

	cout<<"Add meg a magasságát és a szélességét ebben a sorrendben: \n";
	cin>>height>>width;
	while(1)
	{
		system("clear");
		drawBall(abs(height-(x++%(height*2))),abs(width-(y++%(width*2))));
		usleep(50000);
	}

	return 0;
}
