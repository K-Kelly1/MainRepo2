#pragma once

#include <iostream>

class Calculator {
private:
	static double add(const double firstOperand, const double secondOperand);
	static double substract(const double firstOperand, const double secondOperand);
	static double multiply(const double firstOperand, const double secondOperand);
	static double divide(const double firstOperand, const double secondOperand);
public:
	static double calculate(const double firstOperand, const char theOperator, const double secondOperand);
};

enum class Operator {
	ADD = '+',
	SUBSTRACT = '-',
	MULTIPLY = '*',
	DIVIDE = '/'
};