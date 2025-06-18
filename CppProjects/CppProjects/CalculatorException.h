#pragma once

#include <iostream>
#include <string>

#define CALCULATOR_SUB_CLASS_GENERATOR(class_name, error_mes) \
class class_name : public CalculatorException { \
public: \
	class_name() : CalculatorException(error_mes) { } \
};

class CalculatorException {
public:
	CalculatorException(const std::string& error) : m_error{error} {
		// Left blank intentionally
	}

	const std::string& getError() const {
		return this->m_error;
	}
private:
	std::string m_error;
};

CALCULATOR_SUB_CLASS_GENERATOR(DivisionByZero, "division by zero is forbidden");
CALCULATOR_SUB_CLASS_GENERATOR(UnKnownOperator, "unknown operator");