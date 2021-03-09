#include<iostream.h>
#include<conio.h>


class shape
{
 protected:
 int x,y;
public:

  virtual void area(){cout<<"point";}
};

class triangle: public shape
{
 protected:
int x1,y1,x2,y2;
public:
      void area(){ cout<<"area of triangle";}
};

class circle : shape
{  int r;
public:

   void area(){ cout<<"area of circle";}
};

int main()
{   char ch='y';
    int choice,i=0;
    shape *ptr[5];
    clrscr();
    for(i=0;i<5;i++)
    {
      cout<<"enter choice";
      cin>>choice;
      if( choice ==1)
	 ptr[i]=new triangle;
      else
	 ptr[i]=new circle;

     }
    getch();
    return 0;
}