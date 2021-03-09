#include <iostream.h>
#include <fstream.h>
#include <stdlib.h>
int main()
{

   ofstream of( "c.dat", ios::app );

   if ( !of )
   {  // overloaded ! operator
      cerr << "File could not be opened" << endl;
      exit( 1 );    // prototype in stdlib.h
   }
cout << "Enter the account, name, and balance.\n"
	<< "Enter end-of-file to end input.\n? ";
    int account;
   char name[ 30 ];
   float balance;

   while ( cin >> account >> name >> balance )
   {
      of<< account << ' ' << name
		    << ' ' << balance << '\n';
      cout << "? ";
   }

   return 0;  // ofstream destructor closes file
}
