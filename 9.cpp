#include<iostream>
using namespace std;
int main()
{
	int x,y,temp;
	cout<<"enter the number x:";
	cin>> x;
	cout<<"enter the number y:";
	cin>> y;
	
	temp=x;
	x=y;
	y=temp;
	cout<<"swap:\n"<<x<<"\n"<<y;
	return 0;
}
