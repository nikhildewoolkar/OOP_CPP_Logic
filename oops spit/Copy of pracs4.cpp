#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main()
{
int num;
int flag=1;
cout<<"enter the number:-";
cin>>num;
for(int i=2;i<=num/2;i++)
{
if(num%i==0)
{
flag=0;
break;
}
}
if(flag==1)
{
cout<<"prime /n"<<endl;
}
else
{
cout<<"not prime"<<endl;
}
return 0;
}
