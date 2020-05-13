#include "Complex.h"

void Complex::input() {
	std::cout << "Re: ";
	std::cin >> re;
	std::cout << "Im: ";
	std::cin >> im;
}
std::ostream& operator<<(std::ostream& os, Complex z) {
	os << "(" << z.re << ", " << z.im << ")";
	return os;
}