#include<iostream.h>
#include<conio.h>


class A
{
 protected:
 int i;
public:
  A()  { i=10; cout << "A's constructor called" << endl; }
  ~A()  { cout << "A's destructor called" << endl; }
   virtual display(){cout<<i;}
};


class C:  public A
{  int i;
public:
  C()  { i=30; cout << "C's constructor called" << endl; }
 ~C()  { cout << "\nC's destructor called" << endl; }
    display(){  cout<<i;}
};

int main()
{
    clrscr();
    {  A *ptr;
       C c;
       ptr=&c;
       ptr->display();

    }
    getch();
    return 0;
}