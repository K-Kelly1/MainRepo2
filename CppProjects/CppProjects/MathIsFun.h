#pragma once

#include <iostream>
#include <string>

class MathIsFun {
public:
	MathIsFun();
	MathIsFun(const double real, const double imaginary);
	double getReal() const;
	double getImaginary() const;
	void setReal(const double real);
	void setImaginary(const double imaginary);

	MathIsFun operator+(const MathIsFun& other) const;
	MathIsFun operator-(const MathIsFun& other) const;
	MathIsFun operator*(const MathIsFun& other) const;
	bool operator==(const MathIsFun& other) const;

	friend std::ostream& operator<< (std::ostream& out, const MathIsFun& point);

private:
	double m_real;
	double m_imaginary;
};