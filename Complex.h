#pragma once
#include <iostream>

class Complex {
public:
	enum Mode { DEFT, RECT };
private:
	double re;
	double im;
	static Mode mode;
public:
	Complex(): re(0.0), im(0.0) {}
	Complex(double r, double i = 0): re(r), im(i) {}
	Complex(const Complex& z): re(z.re), im(z.im) {}
	Complex operator+(const Complex& z) const { return Complex(re + z.re, im + z.im); }
	Complex operator-(const Complex& z) const { return Complex(re - z.re, im - z.im); }
	Complex operator*(const Complex& z) const {
		return Complex(re * z.re - im * z.im, re * z.im + im * z.re);
	}
	void input();
	friend std::ostream& operator<<(std::ostream& os, Complex z);
	//return true if opeation is available
	static bool isavailable(char sign) {
		if (sign == '+' || sign == '-' || sign == '*') return true;
		else return false;
	}
};

