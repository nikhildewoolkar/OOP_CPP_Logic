#include <iostream> 
#include <vector>
using namespace std;


class Student
{

	string name;
	int roll, sclass;
	float s1,s2,s3,s4,s5;
	float percentage, result;
	bool isPass;




public:

	Student();

	~Student(){
		cout<<endl<< "Goodbye";
	}

	Student(string name1, int roll1, int sclass1, float ss1, float ss2, float ss3, float ss4, float ss5){

		name = name1;
		roll = roll1;
		sclass = sclass1;
		s1=ss1;	s2=ss2;	s3=ss3;	s4=ss4;	s5=ss5;

		result = s1+s2+s3+s4+s5;


		percentage = (result*100)/500;
		if(percentage >=45)
			isPass = true;
		else{
			isPass = false;
		}

		cout << percentage;



	}


	Student(Student &s1){

		name = s1.name;
		roll = s1.roll;
		sclass = s1.sclass;
		result = s1.result;
		percentage = s1.percentage;
		isPass = s1.isPass;
	}

	void printDetails(){

		cout<<endl << "--------- " << name << " ----------"<<endl; 
		cout<<endl << "\nRoll No.:\t" << this->roll << "\nClass:\t" << this->sclass
		<< "\nResult:\t" << this->result << "\nPercentage:\t" << this->percentage << endl;
		if(isPass)
			cout << "\nResult:\tStudent is passed";
		else
			cout << "\nResult:\tStudent is failed";

	}
};

int main()
{
	

	float f1;
	string name;
	int roll, sclass;
	float s1,s2,s3,s4,s5;



	cout << "Enter a name: "<< endl;
	cin >> name;

	cout << "Roll no.: " << endl;
	cin >> roll;

	cout << "Class: " << endl;
	cin >> sclass;

	cout << "Enter marks of sub1";
	cin >> s1;

	cout << "Enter marks of sub2";
	cin >> s2;

	cout << "Enter marks of sub3";
	cin >> s3;

	cout << "Enter marks of sub4";
	cin >> s4;

	cout << "Enter marks of sub5";
	cin >> s5;

	Student st1(name, roll, sclass, s1, s2, s3, s4, s5);


	st1.printDetails();

	Student st2(st1);
	st2.printDetails();



	return 0;
}





