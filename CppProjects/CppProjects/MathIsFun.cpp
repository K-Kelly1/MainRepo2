#include "MathIsFun.h"

using std::cout;
using std::cin;
using std::endl;

MathIsFun::MathIsFun() {
	this->m_real = 0;
	this->m_imaginary = 0;
}

MathIsFun::MathIsFun(const double real, const double imaginary) {
	this->m_real = real;
	this->m_imaginary = imaginary;
}

double MathIsFun::getReal() const {
	return this->m_real;
}

double MathIsFun::getImaginary() const {
	return this->m_imaginary;
}

void MathIsFun::setReal(const double real) {
	this->m_real = real;
}

void MathIsFun::setImaginary(const double imaginary) {
	this->m_imaginary = imaginary;
}

MathIsFun MathIsFun::operator+(const MathIsFun& other) const {
	return MathIsFun(this->m_real + other.getReal(), this->m_imaginary + other.getImaginary());
}

MathIsFun MathIsFun::operator-(const MathIsFun& other) const {
	return MathIsFun(this->m_real - other.getReal(), this->m_imaginary - other.getImaginary());
}
MathIsFun MathIsFun::operator*(const MathIsFun& other) const {
	double resultReal = (this->m_real * other.getReal()) - (this->m_imaginary * other.getImaginary());
	double resultImaginary = (this->m_real * other.getImaginary()) + (this->m_imaginary * other.getReal());

	return MathIsFun(resultReal, resultImaginary);
}

bool MathIsFun::operator==(const MathIsFun& other) const {
	return ((this->m_real == other.getReal()) && (this->m_imaginary == this->getImaginary()));
}

std::ostream& operator<< (std::ostream& out, const MathIsFun& number) {
	out << number.getReal() << " + " << number.getImaginary() << "i";
	return out;
}

int main() {
	MathIsFun a = MathIsFun(10,20);
	MathIsFun b = MathIsFun(-30, 5);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	MathIsFun c = a + b;
	cout << "c (a+b): " << c << endl;

	MathIsFun d = a - b;
	cout << "d (a-b): " << d << endl;

	MathIsFun e = a * b;
	cout << "e (a*b): " << e << endl;

	MathIsFun f = MathIsFun(-30, 5);

	if (a == f) {
		cout << a << " is eqaul to " << f << endl;
	} else {
		cout << a << " is not eqaul to " << f << endl;
	}

	if (b == f) {
		cout << b << " is eqaul to " << f << endl;
	} else {
		cout << b << " is not eqaul to " << f << endl;
	}

	MathIsFun g = MathIsFun();
	cout << "g: " << g << endl;
}