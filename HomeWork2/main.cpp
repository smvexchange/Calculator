#include <iostream>

using namespace std;

char input_operation()
{	
	char operation;
	cout << "Please, enter one of this operations: '+', '-', '*', '/', '!', '^'.\nIf you want to quit, please, enter 'q':" << endl;
	while (true)
	{
		cin >> operation;
		if (operation == 'q' 
			|| operation == '+' 
			|| operation == '-' 
			|| operation == '*' 
			|| operation == '/' 
			|| operation == '!' 
			|| operation == '^')
		{
			break;
		}
		cout << "Unknown operation. Try input operation again:" << endl;
	}
	return operation;
}

double input_operand()
{
	double operand;
	cout << "Please, enter the number:" << endl;
	cin >> operand;
	return operand;
}

int factorial(int operand)
{	
	int index = 1;
	int result = 1;
	while (index < operand)
	{
		result *= ++index;
	}
	return result;
}

double calculate_result(char operation, double first_operand, double second_operand)
{
	double result;
	int index;
	switch (operation)
	{
	case '+':
		result = first_operand + second_operand;
		break;
	case '-':
		result = first_operand - second_operand;
		break;
	case '*':
		result = first_operand * second_operand;
		break;
	case '/':
		result = first_operand / second_operand;
		break;
	case '^':
		result = 1;
		index = 0;
		while (index < second_operand)
		{
			result *= first_operand;
			index++;
		}
		break;
	default:
		result = 0;
		break;
	}
	return result;
}

int main()
{
	cout << "Calculator v1.0" << endl;
	while (true)
	{
		char operation = input_operation();
		if (operation == 'q')
		{
			cout << "Goodbye!" << endl;
			break;
		}
		else if (operation == '/')
		{
			int dividend = input_operand();
			int divisor;
			while (true)
			{
				divisor = input_operand();
				if (divisor != 0)
				{
					break;
				}
				cout << "The divisor cannot be zero. Try input another number." << endl;
			}
			cout << "Result is " << calculate_result(operation, dividend, divisor) << endl;
		}
		else if (operation == '!')
		{
			cout << "Result is " << factorial(input_operand()) << "." << endl;
		}
		else
		{
			int first_operand = input_operand();
			int second_operand = input_operand();
			cout << "Result is " << calculate_result(operation, first_operand, second_operand) << endl;
		}
		cout << "-------------------------------------------------------------------" << endl;
	}
}
