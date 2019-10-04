/*
Write a program that asks the user for a positive integer no greater than 15. 
The program should then display a square on the screen using the character ‘X’. 
The number entered by the user will be the length of each side of the square.
*/
#include <iostream>
using namespace std;

int main ()
{
	int number;

	cout<< “Enter a number!” << endl;
	cin >> number;

	if(number > 15)
	{
		cout << "Your input must be less than 15” << endl;
	}
	else 
	{
		for (int j=0; j < number; j++)
		{
			for(int i=0; i < number; i++)
			{
				cout << “X”;
			}
			cout << endl;
  		    }
	}
	return 0;
}
