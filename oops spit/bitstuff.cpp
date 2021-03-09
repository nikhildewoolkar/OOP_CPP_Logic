#include<iostream>
#include<string>
#include <bits/stdc++.h> 
using namespace std;
class nick 
{
public:
string str,s,e,bin,d;
int choice,flag;
string a[3];
public:
void get()
{
cout<<"enter a string:-\n";
getline(cin,str);
op();
}
void charstuff()
{
a[0]="DLE STX ";
a[1]=str;
a[2]=" DLE EXT ";
}
void op()
{
cout<<"1:-character stuffing \n 2:-bit stuffing\n";
cin>>choice;
if(choice==1)
{
charstuff();
dis();
}
else if(choice==2)
{
bitstuff();
dis();
}
else
{
cout<<"enter correct choice____";
}
}
void strtobin(string s) 
{ 
d="";
int n=s.length(); 
for(int i=0;i<=n;i++) 
{  
int val=int(s[i]); 
bin=""; 
while(val>0) 
{ 
(val % 2)?bin.push_back('1') : 
bin.push_back('0'); 
val/=2; 
} 
reverse(bin.begin(),bin.end()); 
	cout<<bin<<""<<"\n";
	d.append(bin);
	}
	} 
	void bitstuff()
	{
	strtobin(str);
	flag=0;
	//string f="11111010111110101101";
	for(int i=0;i<d.length();i++)
{
	cout<<d[i]<<"  ";
	if(d[i]=='1')
		flag++;
	else if(d[i]=='0')
		flag=0;
	
	if(flag==5)
	{
		cout<<"*0*";
		flag=0;
	}

//	if(f[i]==1&&f[i+1]==1)
//	{
//		flag=flag+1;
//	}
//	cout<<f[i];
//if(flag==4)
//{
//cout<<"*0*";
//flag=0;
//}
}

}
void dis()
{
for(int i=0;i<3;i++)
{
cout<<a[i];
}
}
};
int main()
{
nick a;
a.get();
}
