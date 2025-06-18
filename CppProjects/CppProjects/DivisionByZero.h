#pragma once

#include "CalculatorException.h"

#include <iostream>
#include <string>

class DivisionByZero : public CalculatorException {
public:
	DivisionByZero(){
		setError("Division by zero is forbidden");
	}
};
