/*

Assignments 03 - 1&2

*/


#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	int no_student;
	string name,cls_name;
	bool p_f;
	int roll;
	int maths,science,history,biology,chemistry;
	double percent,result;
public:
	Student(){
		cout<<"--- Default Constructor Called!----"<<endl;
	}

	Student(Student& a){
		this->name=a.name;
		this->cls_name=a.cls_name;
		this->roll=a.roll;
		this->maths=a.maths;
		this->science=a.science;
		this->history=a.history;
		this->biology=a.biology;
		this->chemistry=a.chemistry;

		calc();
	}
	Student(string name,string cls_name,int roll,int maths, int science,int history,int biology,int chemistry){
		this->name=name;
		this->cls_name=cls_name;
		this->roll=roll;
		this->maths=maths;
		this->science=science;
		this->history=history;
		this->biology=biology;
		this->chemistry=chemistry;

		calc();
		
	}

	void calc(){
		result=maths+science+history+biology+chemistry;
		percent=((result)/5);
		if(percent<45){
			p_f=false;
		}
		else{
			p_f=true;
		}
	}

	void printValues(){
		cout<<"------------------------------"<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Class name: "<<cls_name<<endl;
		cout<<"Roll no: "<<roll<<endl;
		cout<<"####  | Marks | ######"<<endl;
		cout<<"Maths: "<<maths<<endl;
		cout<<"Science:: "<<science<<endl;
		cout<<"History:: "<<history<<endl;
		cout<<"Biology:: "<<biology<<endl;
		cout<<"Chemistry:: "<<chemistry<<endl;
		cout<<"Percentage%:: "<<percent<<"%"<<endl;
		cout<<"Total: "<<result<<endl;
		if(p_f)
			cout<<name<<" passed the exam"<<endl;
		else
			cout<<name<<" failed the exam"<<endl;
		cout<<"------------------------------"<<endl;
	}

	~Student(){
		//cout<<"Destructor called!"<<endl;
	}
};

int main(){

	int no_student=10;
	int count=0;
	string name,cls_name;
	int roll;
	int maths,science,history,biology,chemistry;
	double percent,result;

	//input
	cout<<"Enter student's name: ";
	cin>>name;

	cout<<"Enter class name: ";
	cin>>cls_name;

	cout<<"Enter roll number:";
	cin>>roll;

	cout<<"Enter marks in Maths: ";
	cin>>maths;

	cout<<"Enter marks in Science: ";
	cin>>science;

	cout<<"Enter marks in History: ";
	cin>>history;

	cout<<"Enter marks in Biology: ";
	cin>>biology;

	cout<<"Enter marks in Chemistry: ";
	cin>>chemistry;


	Student s1(name,cls_name,roll,maths,science,history,biology,chemistry);

	//using copy constructor
	Student s2(s1);
	//printing the copied object
	s2.printValues();

	return 0;
}

