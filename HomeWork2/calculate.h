#pragma once
#ifndef CALCULATE_H_SENTRY
#define CALCULATE_H_SENTRY

char input_operation();
double input_operand();
int calculate_sum(int first_operand, int second_operand);
int calculate_sub(int first_operand, int second_operand);
int calculate_multi(int first_operand, int second_operand);
double calculate_division(double dividend, double divisor);
int calculate_factorial(int operand);
int calculate_power(int operand, int power);

#endif // CALCULATE_H_SENTRY