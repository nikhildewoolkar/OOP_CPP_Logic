#include<iostream>
using namespace std;

class rectangle;
class square{
	private:
		int side;
	public:
		square(int a){
			side=a;
		}
		friend class rectangle;
};

class rectangle{
	private:
		int side1;
	public:
		rectangle(int a){
			side1=a;
		}

	int show(square a){
		return(a.side);
	}
};

int main(){
	square x(20);
	rectangle x2(40);
	cout<<"square side: "<<x2.show(x);
return 0;
}
