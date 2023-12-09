#include <iostream>
#include <cmath>

using namespace std;

// Define Variables
long float a;
long float b;


int main()
{
	//Anleitung
	cout << "To start press 3   "
		<< "For Manual press 1  "
		<< "For Keywords press 2 ";
	int start;
	cin >> start;

	if (start == 3)
	{
		//Get input
		cout << "what dop you want to do?";
		string Rechenoperation;
		cin >> Rechenoperation;

		//Get operation and work with it

		//Add
		if (Rechenoperation == "+" or Rechenoperation == "add")
		{
			long float summe;
			cin >> a;
			cout << "+";
			cin >> b;

			summe = a + b;

			//add a value until a is 0
			while (a != 0)
			{
				cout << "+";
				cin >> a;
				summe = summe + a;
			}

			//print new sum
			cout << "Solution: " << summe;
		}

		//Subtract
		else if (Rechenoperation == "-" or Rechenoperation == "subtract")
		{
			long float subtraction;
			cin >> a;
			cout << "-";
			cin >> b;

			subtraction = a - b;

			// subtract Value until a is 0
			while (a != 0)
			{
				cout << "-";
				cin >> a;
				subtraction = subtraction - a;
			}
			cout << "Sulution: " << subtraction;
		}

		//Divide
		else if (Rechenoperation == "/" or Rechenoperation == "divide")
		{
			long float division;
			cin >> a;
			cout << "/";
			cin >> b;

			division = a / b;

			cout << division << "    ";
			// subtract Value until a is 0
			while (a != 0)
			{
				cout << "/";
				cin >> a;
				
				division = division / a;

				cout << division << "    ";
			}
			cout << "Ended sucessfully";
		}

		//multiply
		else if (Rechenoperation == "*" or Rechenoperation == "multiply")
		{
			long float multiplication;
			cin >> a;
			cout << "*";
			cin >> b;

			multiplication = a * b;

			cout << multiplication << "    ";

			// subtract Value until a is 0
			while (a != 0)
			{
				cout << "*";
				cin >> a;

				multiplication = multiplication * a;

				cout << multiplication << "   ";
			}
			cout << "Ended sucessfully";
		}

		// If square root
		else if (Rechenoperation == "sroot" or Rechenoperation == "SRoot" or Rechenoperation == "sRoot" or Rechenoperation == "Sroot")
		{
			cout << "What is under the Root?";

			string Op;
			cin >> Op;

			if (Op == "+" or Op == "add")
			{
				long float summe;
				cin >> a;
				cout << "+";
				cin >> b;

				summe = a + b;

				//add a value until a is 0
				while (a != 0)
				{
					cout << "+";
					cin >> a;
					summe = summe + a;
				}

				//print new sum
				cout << "Solution: " << sqrt(summe);
			}

			else if (Op == "-" or Op == "substract")
			{
				long float substraction;
				cin >> a;
				cout << "-";
				cin >> b;

				substraction = a - b;

				//add a value until a is 0
				while (a != 0)
				{
					cout << "-";
					cin >> a;
					substraction = substraction - a;
				}

				//print new sum
				cout << "Solution: " << sqrt(substraction);
			}
		}

		//If Power
		else if (Rechenoperation == "power" or Rechenoperation == "pow")
		{
			cout << "Add or subtract?";

			string Op;
			cin >> Op;

			if (Op == "+" or Op == "add")
			{
				long float summe;
				cin >> a;
				cout << "+";
				cin >> b;

				summe = a + b;

				//add a value until a is 0
				while (a != 0)
				{
					cout << "+";
					cin >> a;
					summe = summe + a;
				}

				//print new sum
				cout << "To the power of: ";

				long float power;
				cin >> power;
				cout << "Solution: " << pow(summe, power);
			}

			else if (Op == "-" or Op == "substract")
			{
				long float substraction;
				cin >> a;
				cout << "-";
				cin >> b;

				substraction = a - b;

				//add a value until a is 0
				while (a != 0)
				{
					cout << "-";
					cin >> a;
					substraction = substraction - a;
				}

				//print new sum
				cout << "To the power of: ";

				long float power;
				cin >> power;
				cout << "Solution: " << pow(substraction, power);
			}
		}

		//If no valid operation
		else
		{
			cout << "Error - no valid operation";
		}
	}

	//If manual
	else if(start == 1)
	{
		cout << "Answer the questions in written form or with symbols. Everytime you make 0 a number, the solution is displayed. Restart the program to use the calculator.";
	}

	//If Keywords
	else
	{
		cout << "Power: pow, power (then the keywords for Subtraction or Addition)  Squareroot: sroot, Sroot, sRoot, SRoot (then Subtraction or Addition)  Subtraction: -, subtract  Addition: add, +    Restart to use calculator.";
	}
}
