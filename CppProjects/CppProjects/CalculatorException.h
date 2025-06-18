#pragma once
#include <iostream>
#include <string>

class CalculatorException
{
private:
	std::string m_error;

public:
	CalculatorException(std::string error) : m_error{ error } {
		// Initialized by initialization list
	}

	const std::string& getError() const {
		return m_error; 
	}
};
