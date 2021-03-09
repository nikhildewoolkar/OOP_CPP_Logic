#include <iostream>
#include <string>
using namespace std;
const string ZERO = " ZERO ";
const string EMPTY = "";
const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
				"Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
				"Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
				"Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };
const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
				"Sixty ", "Seventy ", "Eighty ", "Ninety " };
string calculate(int n, string ext)
{
if (n == 0) 
{
return EMPTY;
}
if (n > 19) 
{
return Y[n / 10] + X[n % 10] + ext;
}
else 
{
return X[n] + ext;
}
}
string convert(unsigned long long int n)
{
string res;
res = calculate((n % 100), "");
if (n > 100 && n % 100) {
res = "and " + res;
}
res = calculate(((n / 100) % 10), "Hundred ") + res;
res = calculate(((n / 1000) % 100), "Thousand ") + res;
return res;
}
int main()
{
int num;
cout<<"enter the number:-";
cin>>num;
if(num==0)
{
cout<<"ZERO"<<'\n';
}
else if(num<0)
{
cout <<"minus" <<convert(num) << '\n';
}
else
{
cout <<convert(num) << '\n';
}
return 0;
}
