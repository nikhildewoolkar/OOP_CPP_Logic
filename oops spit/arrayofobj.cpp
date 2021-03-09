#include <iostream> 
using namespace std; 
class Student
{public:
	string name;
	long double m1,m2,m3,m4,m5,avg,percent, rno ;
	Student()
{
cout<<"Enter name";
cin>>name;
cout<<"Enter marks";
cin>>m1;
cin>>m2;
cin>>m3;
cin>>m4;
cin>>m5;
cout<<"Enter roll num";
cin>>rno;
}

void per()
{
avg= (m1+m2+m3+m4+m5)/5;
percent= avg;
}

 void display(){
cout<<name<<"\n";
cout<<m1<<","<<m2<<","<<m3<<","<<m4<<","<<m5<<","<<"\n";
cout<<"number is "<<rno<<"\n";
cout<<"avg is "<<avg<<"\n";
cout<<percent<<"\n";}};

int main()
{
Student s[3];

for(int i=0;i<3;i++)
{
 
s[i].per();
s[i].display();
}	

long double g=s[0].percent;
for(int i=1;i<3;i++)
{
if(g<s[i].percent)
{
int t=g;
g=s[i].percent;
s[i].percent=t;
}
}
cout<<"Largest percent"<<g<<"\n";

long double small=s[0].percent;
for(int i=1;i<3;i++)
{
if(small>s[i].percent)
{
int t=small;
small=s[i].percent;
s[i].percent=t;
}
}
cout<<"Smallest percent"<<small<<"\n";
}


