#include<iostream>
#include<string>
#include<math.h>
#include <bits/stdc++.h> 
using namespace std;
class nick 
{
	public:
	int b[100],temp[100],main[100][100];
	string s;
	int m,r,t,flag,v,u,n,c,i;
	string d;
	public:
	void get()
	{
			cout<<"enter the bit string:-";
			cin>>s;
			v=s[0]-48;
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
			for(int i1=0;i1<t;i1++)
			{
			b[i1]=-1;
			}
			for(int i2=0;i2<t;i2++)
			{
			cout<<b[i2]<<" ";
			}
			cout<<"\n";
			cout<<"\n\n";
			cout<<"making 2^i[0:r]:-\n";
			for(int i3=0;i3<r;i3++)
			{
			u=(pow(2,i3))-1;
			cout<<u<<endl;
			b[u]=1;
			}
			for(int i4=t-1;i4>=0;i4--)
			{
			cout<<b[i4]<<" ";
			}
			cout<<"\n\n";
			cout<<"making parity bit =1 and placing other bit values from left:-\n\n";
			flag=0;
			for(int i5=t-1;i5>=0;i5--)
			{
			if(b[i5]==-1)
			{
			b[i5]=s[flag]-48;
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
				numtobin(i);
				cout<<" \n";
         	}
				for(int l=0;l<=t;l++)
	   {
	   for(int q=i-1;q>=0;q--)
	   {
	   	cout<<main[i][q];
	   }
	   cout<<" \n";
    } 
			
	}
    void numtobin(int n)
    {       
             i = 0; 
            while (n > 0) 
			{	 
        		temp[i] = n % 2; 
        		n = n / 2; 
        		i++; 
    		}  
    		cout<<" \n\n"<<i<<endl;
    		for(int k=0;k<=t;k++)
    		{
    		for (int j = i - 1; j >= 0; j--) 
        		main[k][j]= temp[j];
	}
	for(int l=0;l<=t;l++)
	   {
	   for(int q=i-1;q>=0;q--)
	   {
	   	cout<<main[i][q];
	   }
	   cout<<" \n";
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
