#include<iostream>
#include<string>
#include<math.h>
#include <bits/stdc++.h> 
using namespace std;
class nick 
{
	public:
	int b[100],temp[100],main[100][10];
	string s;
	int m,r,t,flag,v,u,n,c,i,k,l,o,p1[50],p2[50],p3[50],p4[50];
	
	string d;
	public:
	void get()
	{
			cout<<"enter the bit string:-";
			cin>>s;
			cout<<v<<"\n";
			m=s.length();
			cout<<m<<endl;
			for(r=0;;r++)
			{
				if(pow(2,r)>=m+r+1)
				{
				break;
				}
			}
			cout<<"r= "<<r<<" m= "<<m<<endl;
			t=m+r;
			cout<<"total no. of bits:- "<<t<<endl;
	}
		void mytech()
		{
			u=0;
			cout<<"making all the tems zero:-\n";
			for(int i=0;i<t;i++)
			{
			b[i]=-2;
			}
			for(int i=0;i<t;i++)
			{
			cout<<b[i]<<" ";
			}
			cout<<"\n";
			cout<<"\n\n";
			cout<<"making 2^i[0:r]:-\n";
			for(int i=0;i<r;i++)
			{
			u=(pow(2,i))-1;
			cout<<u<<endl;
			b[u]=-1;
			}
			for(int i=t-1;i>=0;i--)
			{
			cout<<b[i]<<" ";
			}
			cout<<"\n\n";
			cout<<"making parity bit =1 and placing other bit values from left:-\n\n";
			flag=0;
			for(int i=t-1;i>=0;i--)
			{
			if(b[i]==-2)
			{
			b[i]=s[flag]-48;
			flag++;
		    }
			}
			for(int i=t-1;i>=0;i--)
			{
				cout<<b[i]<<" ";
			}
			cout<"\n";
		for(int i=0;i<t;i++)
		{
		for(int j=0;j<10;j++)
		{
		    main[i][j]=0;
	}
	for(int j=0;j<10;j++)
		{
		    cout<<main[i][j];
	}
	cout<<endl;
	}
		    for(int i=0;i<=t;i++)
		    {
			n=i;
			o=i;
			if(n==0)
			{
				main[o][0]=0;
				cout<<"Binary of the given number= ";
				cout<<main[o][0]<<endl;
				
			}
			else{
			
		 for( k=0; n>0; k++)    
			{    
				temp[k]=n%2;    
				n= n/2;  
			}    
			l=k;
		cout<<"Binary of the given number= "; 
			   
			for( k=0;k<l;k++)    
			{    
			main[o][k]=temp[k];   
			}
			for( k=0;k<l;k++)    
			{    
			cout<<main[o][k];   
			}
			cout<<endl;
		}
		}
		cout<<endl<<endl<<endl;
		for(int i=0;i<t;i++)
		{
		for(int j=0;j<10;j++)
		{
		    cout<<main[i][j];
	}
	cout<<endl;	
		}
	
	}
	
	};
	int main()
{
nick o;
o.get();
o.mytech();
return 0;
}
