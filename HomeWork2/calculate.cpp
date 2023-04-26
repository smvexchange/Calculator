#include <iostream>
#include "calculate.h"

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

int calculate_sum(int first_operand, int second_operand)
{
	return first_operand + second_operand;
}

int calculate_sub(int first_operand, int second_operand)
{	
	return first_operand - second_operand;
}

int calculate_multi(int first_operand, int second_operand)
{	
	return first_operand * second_operand;
}

double calculate_division(double dividend, double divisor)
{
	return dividend / divisor;
}

int calculate_factorial(int operand)
{
	if (operand == 0)
	{
		return 1;
	}
	else
	{
		operand *= calculate_factorial(operand - 1);
		return operand;
	}
}

int calculate_power(int operand, int power)
{	
	if (power == 0)
	{
		return 1;
	}
	else
	{
		operand *= calculate_power(operand, power - 1);
		return operand;
	}
}