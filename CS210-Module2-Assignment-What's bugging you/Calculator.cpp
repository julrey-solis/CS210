/*
 * Calculator.cpp
 *
 *  Date: 11/10/2025
 *  Author: Julrey Solis
 */

#include <iostream>

using namespace std;

void main()
{
	//char statement[100];													// Not sure what this statement variable is for so I had commented it out.
	int op1, op2;
	char operation;
	char answer = 'y';														// I fixed "Y" to 'y' because "" represents string and not char. Also missing a ; at the end of the statement
		while (answer == 'y' || answer == 'Y')								// added || for OR. This will accept both upper and lower case y depending on what user enters.
		{
			cout << "Enter expression" << endl;
			cin >> op1 >> operation >> op2;									// op1 and op2 variables were in different places here.

			if (operation == '+')
			{																// also has " " instead of ' ' for char variable operation. Changed ; to { for if statement.
				cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;	// operator is wrong for cout, it should be << after op2.
			}	

			else if (operation == '-')										// replaced ; with {. Changed if to else if.
			{
				cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;	// operator is wrong after cout, it should be <<.
			}
			
			else if (operation == '*')										//change to else if. Also added {}.
			{
				cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;	//wrong symbol for multiplication. and no ; after endl.
			}

			else if (operation == '/')										// updated to else if and added {}.
			{
				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;	//wrong symbol for division.
			}

			/*
			* I added an else statement just in case a user enters wrong input for operation as to not crash the application.
			* However, if user types a non-numerical number for op1, the program keeps going in an infinite loop.
			* I think that is for a different assignment so I will ignore that for now and expect that user will type the sequence as it is intended.
			*/
			else 
			{
				cout << "Wrong input." << endl;
			}
			

			cout << "Do you wish to evaluate another expression? " << endl;
			cin >> answer;
			 
		}
		/*
		* The assignment requires that if user enters 'n' or 'N', that it will terminate the program.
		* In reality, any letter other than 'y' or 'Y' will terminate the program.
		* So I just added the output statement "Program Finished after the while loop" 
		* I wanted to add some other code to make the program behave properly if they typed something different but I think thats for another module ;)
		*/

		cout << "Program Finished." << endl;
}