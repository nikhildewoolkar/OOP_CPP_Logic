/*

Assignments 03 - 3

*/

#include <iostream>
#include <string>
using namespace std;

class Student{
private:
	string name,cls_name;
	int roll;
	int maths,science,history,biology,chemistry;
	double percent,result;
	bool p_f;
public:
	Student(){
		//cout<<"--- Default Constructor Called!----"<<endl;
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
	void setValues(string name,string cls_name,int roll,int maths, int science,int history,int biology,int chemistry){
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
	}

	double getPercentage(){

		return percent;
	}

	~Student(){
		cout<<"Destructor called!"<<endl;
	}
};

Student findHighest(Student a,Student highest){

	if(a.getPercentage()>highest.getPercentage()){
		highest=a;
	}
	return highest;
}

Student findLowest(Student a,Student lowest){

	if(lowest.getPercentage()>a.getPercentage()){
		lowest=a;
	}
	return lowest;
}

int main(){
	Student highest,lowest;
	int no_student=3;
	Student a[no_student];
	int count=0;
	string name,cls_name;
	int roll;
	int maths,science,history,biology,chemistry;
	double percent,result;

	//getting values from user
	for(int i=0;i<no_student;i++){
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

		a[i].setValues(name,cls_name,roll,maths,science,history,biology,chemistry);
	}

	highest.setValues("","",0,0,0,0,0,0);
	lowest.setValues("","",100,100,100,100,100,100);

	for(int i=0;i<no_student;i++){
		highest=findHighest(a[i],highest);
		lowest=findLowest(a[i],lowest);
	}

	//printing highest scored student
	cout<<"------------------------------"<<endl;
	cout<<"	|Highest scored|"<<endl;
	cout<<"------------------------------"<<endl;
	highest.printValues();
	cout<<"------------------------------"<<endl;
	cout<<"	|Lowest scored|"<<endl;
	cout<<"------------------------------"<<endl;
	lowest.printValues();

	return 0;
}