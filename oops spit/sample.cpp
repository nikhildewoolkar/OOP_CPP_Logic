#include<iostream>
using namespace std;

class no{
	private:
		int a[10]={1,1,2,3,5,6,7,11,12,15};
	public:
		int getdata(int z){
			for(int i=0;i<10;i++){
				if(z==a[i] ){
					cout<<"Yes "<<i;
					return 0;
				}
				else if(z<a[i]){

					cout<<"No "<<a[i];
					return 0;
				}
			}
		}
	
};

int main(){
	no obj;
	int n;
	cout<<"enter no:";
	cin>>n;
	obj.getdata(n);

return 0;
}
