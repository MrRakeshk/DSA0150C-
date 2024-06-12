#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter three numbers:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	if((a>b)&&(a>c))
	{
		cout<<"largest is "<<a;
	}
	else if ((b>a)&&(b>c))
	{
		cout<<"largest is "<<b;
	}
	else
	{
		cout<<"largest is "<<c;
	}
}
