#pragma once

#include <iostream>
#include <string>

class CalculatorException {
public:
	CalculatorException() : m_error{"Generic calculator exception"} {
		// Left blank intentionally
	}

	const std::string& getError() const {
		return this->m_error;
	}

	void setError(std::string error) {
		this->m_error = error;
	}

private:
	std::string m_error;
};