#include <iostream>
#include "calculate.h"

using namespace std;

int main()
{
	cout << "Calculator v2.0" << endl;
	while (true)
	{	
		double first_operand;
		double second_operand;
		double dividend;
		double divisor;
		int operand;
		int power;
		char operation = input_operation();
		switch (operation)
		{
		case 'q':
			cout << "Goodbye!" << endl;
			return 0;
		case '+':
			first_operand = input_operand();
			second_operand = input_operand();
			cout << "Result is " << calculate_sum(first_operand, second_operand) << "." << endl;
			break;
		case '-':
			first_operand = input_operand();
			second_operand = input_operand();
			cout << "Result is " << calculate_sub(first_operand, second_operand) << "." << endl;
			break;
		case '*':
			first_operand = input_operand();
			second_operand = input_operand();
			cout << "Result is " << calculate_multi(first_operand, second_operand) << "." << endl;
			break;
		case '/':
			dividend = input_operand();
			while (true)
			{
				divisor = input_operand();
				if (divisor != 0)
				{
					break;
				}
				cout << "The divisor cannot be zero. Try input another number." << endl;
			}
			cout << "Result is " << calculate_division(dividend, divisor) << "." << endl;
			break;
		case '!':
			operand = input_operand();
			cout << "Result is " << calculate_factorial(operand) << "." << endl;
			break;
		case '^':
			operand = input_operand();
			power = input_operand();
			cout << "Result is " << calculate_power(operand, power) << "." << endl;
			break;
		default:
			break;
		}
		cout << "-------------------------------------------------------------------" << endl;
	}
	return 0;
}
