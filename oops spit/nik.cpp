#include <iostream> 
#include <vector>
using namespace std;


class Student
{

	string name;
	int roll, sclass;
	vector<float> marks;
	float percentage, total;
	bool isPass;




public:

	Student(){
		cout<<"Default Constructor called" <<endl;
	}

	float getPercentage(){
		return percentage;
	}

	string getName(){
		return name;
	}

	void setValues(string name1, int roll1, int sclass1, vector<float> marks1){
		name = name1;
		roll = roll1;
		sclass = sclass1;
		marks = marks1;


		for(int i=0; i<5; i++)
			total += marks[i]; 

		percentage = (total*100)/500;


		if(percentage >=45)
			isPass = true;
		else{
			isPass = false;
		}

		cout << endl << "Percentage: "<< percentage << endl;

	}


	void printDetails(){


		cout<<endl<<endl<<endl << "--------- " << name << " ----------"<<endl; 


		cout<<endl  << "\nRoll No.:\t" << this->roll << "\nClass:\t" << this->sclass
		<< "\nResult:\t" << this->total << "\nPercentage:\t" << this->percentage << endl;

		for (int i = 0; i < 5; i++)
		{
			cout<<endl << "Subject No." << (i+1) << "\tMarks: " << marks[i];			
		}

		if(isPass)
			cout << "\nResult:\tStudent is passed";
		else
			cout << "\nResult:\tStudent is failed";

		cout<<endl <<"xxxxxxxxxxxxxxxxxxxxx" << endl;
	}


	
};

int main()
{
	vector<float> v1;
	v1.push_back(70);
	v1.push_back(60);
	v1.push_back(70);
	v1.push_back(60);
	v1.push_back(70);

	float f1;
	string name;
	int roll, sclass;

	Student students[3];


	for (int i = 0; i < 3; i++)
	{

		vector<float> v1;
		cout<< i+1 << ". Enter name: "<< endl;
		cin >> name;
		cout<< i+1 << ". Enter roll: "<< endl;
		cin >> roll;
		cout<< i+1 << ". Enter class: "<< endl;
		cin >> sclass;

		for(int j=0; j<5; j++){

			cout<<(j+1)<<". Enter Marks no: " << j+1<< endl;
			cin >> f1;
			v1.push_back(f1); 
		}
		cout << endl;
		students[i].setValues(name, roll, sclass, v1);


	}

	Student highests, lowests;

	float lowest = students[0].getPercentage(), highest = students[0].getPercentage();
	for(int i =0; i<3; i++){
		if(students[i].getPercentage() > highest)
			{	highest = students[i].getPercentage();
				highests = students[i];}
				if(students[i].getPercentage() < lowest)
					{lowest = students[i].getPercentage();	
						lowests = students[i];}

					}

					cout<<endl << "..................Highest percentage:  "<< highests.getName()<< ": " << highest << endl;

					cout<<endl << "..................Lowest percentage: " << lowests.getName()<< ": " << lowest << endl;



					for (int i = 0; i < 3; i++)
					{
						students[i].printDetails();
					}


					return 0;
				}





