// Switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace  std;

int main() {
	double Firstnumber, SecondNumber, Result;
	int Operator;

	cout << "Enter two numbers" << endl;
	cin >> Firstnumber >> SecondNumber;

	cout << "choose the operator which you want to use" << endl;
	cout << "1: Addition" << endl;
	cout << "2: Subtraction" << endl;
	cout << "3: Multiplicaton" << endl;
	cout << "4: Division" << endl;
	cin >> Operator;

	switch (Operator) {
	case 1:

		Result = Firstnumber + SecondNumber;
		cout << "The addition of " << Firstnumber << " and " << SecondNumber << " is equal to " << Result;
		break;
	case 2:

		Result = Firstnumber - SecondNumber;
		cout << "The subraction of " << SecondNumber << " from " << Firstnumber << " is equal to " << Result;
		break;
	case 3:

		Result = Firstnumber * SecondNumber;
		cout << "The multlipication of " << Firstnumber << " by " << SecondNumber << " is equal to " << Result;
		break;
	case 4:

		if (SecondNumber == 0) {
			cout << " You can't divide by zero enter another number " << endl;
			cin >> SecondNumber;
			Result = Firstnumber / SecondNumber;
			cout << "The division of " << Firstnumber << " by " << SecondNumber << " is equal to " << Result;
			break;
		}


	default:

		cout << "invalid operator selected, please enter the  number of the operator shown above" << endl;

	}


}



 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
