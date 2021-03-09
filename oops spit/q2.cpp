#include<iostream>
using namespace std;

class A{
	private:
		int a[5];
	public:
		A(int lobj[5]){
			for(int i=0;i<5;i++){
				a[i]=lobj[i];
			}
		}	
		friend float mean(A x1);
};

float mean(A x1){
	float mean=0;
	for(int i=0;i<5;i++){
		mean+=x1.a[i];
	}
	return(mean/5);
}
int main(){
	cout<<"enter 5 no.\n";
	int x[5]={0};
	for(int i=0;i<5;i++){
		cin>>x[i];
	}
	A a1(x);
	cout<<"mean= "<<mean(a1);

return 0;
}
