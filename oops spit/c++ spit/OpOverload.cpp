#include<iostream>
using namespace std;
class Time{
private:
	int hr,min,sec;
public:
	bool check;
	Time()
	{
		hr=12;
		min=00;
		sec=00;
	}
	Time operator+ (Time t)
	{
		Time t3;
		t3.hr=hr+t.hr;
		t3.min=min+t.min;
		t3.sec=sec+t.sec;
		return t3;
	 } 
	Time operator- (Time t)
	{
		Time t2;
		t2.hr=hr-t.hr;
		t2.min=min-t.min;
		t2.sec=sec-t.sec;
		return t2;
	 }
	  Time(int x,int y,int z)
	 {
	 	hr=x;
	 	min=y;
	 	sec=z;
	 }
	 void Display12()
	 {
	 	convert12()
	 	{
	 		if(hr>=12)
	 		{
	 		hr=hr%12;	
			 }
			 if(min>=60)
			 {
			 min=min%60;
			 hr++;
			 }
			 if(sec>=60)
			 {
			 	sec=sec%60;
			 	min++;
			 }
		 }
	 cout<<"time is:-"<<hr<<" hours "<<min<<" mins "<<sec<<" sec ";
	 String flag=(check==true)?"pm":"am";
	 cout<<flag;
    }
    void convert12()
    {
    	if(hr>=12)
	}
    void dislpay24()
    {
    	convert24();
    	cout<<"time is:-"<<hr<<" hours "<<min<<" mins "<<sec<<" sec "<<endl;
		}
    	void convert24()
    	{
    		if(hr>=24)
    		{
    			hr=hr%24;
			}if(min>=60)
			{
				min=min%60;
				hr++;
			}
			if(sec>=60)
			{
				sec=sec%60;
				min++;
			}
		}
	
};
int main()
{
	Time t1(19,60,51);
	Time t1(19,40,51);
	Time t3=t1+t2;
	t3.Display12();
	t3.Display24();
	return 0;
}
