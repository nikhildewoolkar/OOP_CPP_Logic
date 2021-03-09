#include<iostream>
using namespace std;    
int main ()
    {
int get_vectors;    	
int number_vectors;
    	int vectors;
    	cout << "VECTOR SUM\n";
    		
    	for (int count = 0; count <= number_vectors; count ++)
    	{
                      cout << "Enter number of vectors: ";
    		cin >> number_vectors;
                      number_vectors = get_vectors (vectors);
    	}
    	return 0;
    }
    int get_vectors (int vectors)
    {
    	while (vectors <= 0);
    		{
    			cout << "Number must be greater than 0.\n";
    		}
    		return (vectors);
    }
