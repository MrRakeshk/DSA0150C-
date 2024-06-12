#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter the number:";
	cin>> x;
	if(x>0)
	{
		cout<<"positive:";
	}
	if(x<0)
	{
		cout<<"negative:";
	}
	else
	{
		cout<<"zero:";
	}
	return 0;
}
