/*
2.	
Write a program to a file named “Budget.txt” that asks the user to enter the amount that he or she has budgeted for a month.  
A loop should then prompt the user to enter each of his or her expenses for the month and keep a running total.  
The program should write both the expense name and corresponding expense, along with how much he or she is over-budget or under-budget to the file.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ofstream outputFile;
	float budget_amount, expense_total = 0, expenseAmnt, budget_result;
	int num_of_expenses;
	string expenses;

	outputFile.open("Budget.txt");

	cout << "Enter the amount budgeted for this month: " << endl;
		cin >> budget_amount;

	cout << "How many expenses do you have? " << endl;
		cin >> num_of_expenses;

	for (int i = 0; i < num_of_expenses; i++)
	{
		cout << "Enter expense #" << (i + 1) << ": " << endl;
		cin >> expenses >> expenseAmnt;
		outputFile << expenses  << " " << expenseAmnt<< endl;
		expense_total += expenseAmnt;
	}
	cout << "The expenses were written to the file." << endl;

	budget_result = budget_amount - expense_total;

	if (expense_total > budget_amount)
	{
		outputFile << "You are over budget by $" << budget_result << '.' << endl;
	}
	else if (expense_total < budget_amount)
	{
		outputFile << "You are under budget by $" << budget_result << '.' << endl;
	}
	else if (expense_total == budget_amount)
	{
		outputFile << "Your budget is 0 based." << endl;
	}
	cout << "All of the data has been written to the file." << endl;

	outputFile.close();
	return 0;
}
