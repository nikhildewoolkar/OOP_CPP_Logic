#include<iostream.h>
#include<conio.h>


class A
{
 protected:
 int i;
public:
  A()  { i=10; cout << "A's constructor called" << endl; }
  ~A()  { cout << "A's destructor called" << endl; }
   display(){cout<<i;}
};

class B
{
 protected:
int i;
public:
  B()  { i=20; cout << "B's constructor called" << endl; }
   ~B()  { cout << "B's destructor called" << endl; }
    display1(){ cout<<i;}
};

class C: public B, public A  // Note the order
{  int i;
public:
  C()  { i=30; cout << "C's constructor called" << endl; }
 ~C()  { cout << "\nC's destructor called" << endl; }
   display2(){ display(); display1(); cout<<i;}
};

int main()
{
    clrscr();
    {  C c;
       c.display2();
    }
    getch();
    return 0;
}