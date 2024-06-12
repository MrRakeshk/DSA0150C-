#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter the number x:";
	cin>>x;
	cout<<"enter the number y:";
	cin>>y;
	if(x<y)
	{
		cout<< y <<"greater than" <<x;
	}
	if(x>y)
	{
		cout<<x <<"greater than" <<y;
	}
	else
	{
		cout<<"equal" ;
	}
	return 0;
}
