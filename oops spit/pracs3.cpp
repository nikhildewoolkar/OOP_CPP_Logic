#include <iostream>
using namespace std;
long int multi(int n);
int main()
{
int n;
cout<<"Enter a positive integer: ";
cin>>n;
cout<<"Factorial of "<< n<<" is "<<multi(n)<<"/n";
return 0;
}
long int multi(int n)
{
if (n >= 1)
{
return n*multi(n-1);
}
else
{
return 1;
}
}
