// opers.cpp // saves person object to disk

#include <fstream.h>                //for file streams
#include <iostream.h>
//using namespace std;
/////////////////////////////////////////////////////////////
/// class person //
class person
{ protected: char name[80];              //person’ name
  short age;                  //person’s age
  public:
  void getData()              //get person’s data
	  { cout << "Enter name: ";
	   cin >> name;
	   cout << "Enter age: ";
	   cin >> age;
	   }

  }; ////////////////////////////////////////////////////////////////


int main()
{ person pers;                   //create a person
  for(int i=0;i<3;i++)
 {
  pers.getData();
//get data for person //create ofstream object

ofstream outfile("PERSON.DAT", ios::binary|ios::app); //write to it
outfile.write( (char*)(&pers), sizeof(pers) );
}
return 0;


}