/* Calculations_Bui.cpp : This program asks user for input for num1, num2, num3, num4. If num4 and num2 are not zero, 
we continue with the calcuations.
First name = Daniel 
Last name = Bui 
Date = 02/01/2022
Class COSC_1436_57002
Visual Studio 2017 */
#include <iostream>
using namespace std;

int main()
{
	//declaring two double variables
	double num1;
	double num2;
	//declaring two integer variables
	int num3;
	int num4;
	//declare variables being used in the program
	double add, sub, mult, divi;
	int modu; 
	
	//INPUT: ask user for input
	cout << "Please enter Number 1: \n";
	cin >> num1;

	cout << "Please enter Number 2: \n";
	cin >> num2;

	cout << "Please enter Number 3: \n";
	cin >> num3;

	cout << "Please enter Number 4: \n";
	cin >> num4; 

	//PROCESS: process calculations if number num4 or num2 not equal to 0
	if (num2 == 0 || num4 == 0)
	{
		//OUTPUT: output if num4 or num2 has value of 0
		cout << "Division by 0 is not permitted in math. Please run the program again,\n";
		cout << "without number 4 and 2 being 0.";
	}
	
	else
	{
		//PROCESS: calculations
		add = num1 + num2;
		sub = num1 - num2;
		mult = num1 * num2;
		divi = num1 / num2;
		modu = num3 % num4;

		//OUTPUT of calculated values
		cout << "The sum of number1 + number2 or " << num1 << " + " << num2 << " is: " << add << endl;

		cout << "The difference of number1 - number2 or " << num1 << " - " << num2 << " is: " << sub << endl;

		cout << "The product of number1 * number2 or " << num1 << " * " << num2 << " is: " << mult << endl;

		cout << "The quotient of number1 / number2 or " << num1 << " / " << num2 << " is: " << divi << endl;

		cout << "The remainder of number3 % number4 or " << num3 << " % " << num4 << " is: " << modu << endl;
	}
	system("pause");
	return 0;
}
