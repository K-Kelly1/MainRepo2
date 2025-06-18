#pragma once

#include "CalculatorException.h"

#include <iostream>
#include <string>

class UnKnownOperator : public CalculatorException {
public:
	UnKnownOperator() {
		setError("Unknown opertor used!");
	}
};