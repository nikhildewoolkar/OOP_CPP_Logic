// CPP program to demonstrate 
// how to assign constant values to a vector 

#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
int x=1;

	vector<int> v;
	vector<int> :: iterator it=v.begin();
	
	cout<<v.capacity()<<endl;
	int c=++x;
	v.assign(3,c);
	for(int i=0;i<v.size();i++)
	{
		cout<<"newe"<<v[i];
	}
	v.insert(it+2,5);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	v.push_back(10);
	cout<<v.capacity()<<endl;
cout<<v.size();
	cout << "Size of first: " << int(v.size()) << '\n'; 

	cout << "Elements are\n"; 
	for (int i = 0; i < v.size(); i++) 
		cout << v[i] << endl; 
	return 0; 
} 

