#include<iostream>
using namespace std;
int main()
{	int n=4;
    int arr[]={66,49,66,49};
    int m,sum[n]={0};
    int a[n],sumno=0;
    for(int i=0;i<n;i++)
    {
        a[i]=arr[i];
         while(arr[i]>0)    
        {
            m=arr[i]%10; 
            sum[i]=sum[i]+m;  
            arr[i]=arr[i]/10; 
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(sum[i]==sum[j]){
            	if(sumno<a[i]+a[j])
            	{
            		sumno=a[i]+a[j];
				}
            }
        }
    }
    if(sumno==0)
    {
        cout<<"-1";
    }
	else
	{
		cout<<sumno;
	}

return 0;
}
