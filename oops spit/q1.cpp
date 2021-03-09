#include<iostream>
using namespace std;

class B;
class A{
	private:
		int a;
	public:
		A(int a1){
			a=a1;
		}
		friend int add(A x1, B x2);
};
class B{
	private:
		int b;
	public:
		B(int b1){
			b=b1;
		}
		friend int add(A x1, B x2);
};
int add(A x1, B x2){
	return(x1.a+x2.b);
}
int main(){
	int a,b;
	cout<<"enter class A value: ";
	cin>>a;
	A a1(a);
	cout<<"enter class B value: ";
	cin>>b;
	B b1(b);

	cout<<"addition="<<add(a1,b1)<<"\n";

return 0;	
			
}
	
