#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	string line;
	ifstream fin;
	ifstream fin1;
	fin.open("text1.txt");
	fin1.open("text2.txt");
	ofstream fout("text3.txt");
	fout<<"Content of file 1";
	while(fin.eof()!=1)
	{
		getline(fin,line);
		fout<<line<<endl;
	}
	fout<<"Content of file 2";
	while(fin1.eof()!=1)
	{
		getline(fin1,line);
		fout<<line<<endl;
	}
	
	fin.close();
	fin1.close();
	fout.close();
	return 0;
}

