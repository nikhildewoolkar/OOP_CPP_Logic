#include <iostream>
using namespace std;

int main() {
	int t,d,n,que[100],front,rear;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    front=-1;
	    rear=-1;
	    cin>>n;
	    cin>>d;
	    que[n];
	    for(int j=0;j<n;j++)
	    {
	    	if(front==-1 )
	    	{
	    		rear=front=0;
	    	}
	        cin>>que[front];
	    }
	    for(int i=front+d;i!=rear+d;++i %= n)
	    {
	        cout<<que[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
