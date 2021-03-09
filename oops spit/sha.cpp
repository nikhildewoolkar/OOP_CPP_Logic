#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class nick
{
public:
int ch;
float b,n,dr;
void get()
{
cout<<"\nenter Bandwidth : ";
cin>>b;
cout<<"\nEnter SNR or L : ";
cin>>n;
if((int)n%2==0)
{
cout << "\nUsing Henry Nyquist Theorem*\n";
int dr=2*b*(log(n)/log(2));
cout<< "\nData Rate:-"<<dr<<" bps";
cout<< "\nSNR:-"<<n;
cout<<"\nnoisy";
}
else
{
cout << "\nUsing Shannon Theorem \n";
int dr=b*(log(1+n)/log(2));
cout<<"\nData Rate : "<<dr<<" bps";
cout<<"\nNoisy";
}
cout<<"continue****enter your choice:-(1:-yes/0:-no)";
cin>>ch;
}

void choice()
{
do{
get();
switch(ch)
{
case 1:
     get();
     break;
case 0:
     break;
default:
     cout<<"entered wrong choice:-";
     break;
}
}
while(ch!=0);
}

};
int main()
{
nick o;
o.choice();
return 0;
getch();
}

