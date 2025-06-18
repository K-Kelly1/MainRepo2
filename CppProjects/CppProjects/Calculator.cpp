#include "Calculator.h"
#include "CalculatorException.h"

using std::cout;
using std::cerr;
using std::endl;

double Calculator::add(const double firstOperand, const double secondOperand) {
	return firstOperand + secondOperand;
}

double Calculator::substract(const double firstOperand, const double secondOperand) {
	return firstOperand - secondOperand;
}

double Calculator::multiply(const double firstOperand, const double secondOperand) {
	return firstOperand * secondOperand;
}

double Calculator::divide(const double firstOperand, const double secondOperand) {
	if (secondOperand == 0) {
		throw CalculatorException("Cant divide by 0! bye");
	}
	
	return firstOperand / secondOperand;
}

double Calculator::calculate(const double firstOperand, const char theOperator, const double secondOperand) {
	double result = 0;
	Operator currOperator = static_cast<Operator>(theOperator);

	switch (currOperator) {
	case Operator::ADD:
		result = Calculator::add(firstOperand, secondOperand);
		break;
	case Operator::SUBSTRACT:
		result = Calculator::substract(firstOperand, secondOperand);
		break;
	case Operator::MULTIPLY:
		result = Calculator::multiply(firstOperand, secondOperand);
		break;
	case Operator::DIVIDE:
		try {
			result = Calculator::divide(firstOperand, secondOperand);
		} catch (const CalculatorException& exception) {
			throw exception;
		}

		break;
	default:
		throw CalculatorException{ "There is no such an operator! bye" };
	}

	return result;
}

int main() {
	cout << "6 + 2: " << Calculator::calculate(6, '+', 2) << endl;
	cout << "6 - 2: " << Calculator::calculate(6, '-', 2) << endl;
	cout << "6 * 2: " << Calculator::calculate(6, '*', 2) << endl;
	cout << "6 / 2: " << Calculator::calculate(6, '/', 2) << endl;

	try {
		cout << Calculator::calculate(6, '/', 0) << endl;
	} catch (const CalculatorException& exception) {
		cout << exception.getError() << endl;
	}

	try {
		cout << Calculator::calculate(6, ';', 0) << endl;
	} catch (const CalculatorException& exception) {
		cout << exception.getError() << endl;
	}
}