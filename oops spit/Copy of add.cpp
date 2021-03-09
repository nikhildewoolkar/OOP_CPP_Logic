#include<iostream>
using namespace std;
int main()
{

	int a[3],b[3],c[3],i;
	cout<<"enter int for array 1: ";
	for(i=0;i<3;i++)
	{
		cin>>a[i];
	}
	cout<<"enter int for array 2: ";
	for(i=0;i<3;i++)
	{
		cin>>b[i];
		c[i]=a[i]+b[i];
	}
	cout<<"addition: ";
	for(i=0;i<3;i++)
	{
		cout<<c[i] << "\t";
	}
	}

