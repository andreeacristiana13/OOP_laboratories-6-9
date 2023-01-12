// lab8_8.1.
#include <iostream>
#include<cmath>
using namespace std;

class Complex {
public:
	double real, imag;
	Complex(double realI = 0, double imagI = 0) {
		real = realI;
		imag = imagI;
	}
	double modul() {
		return sqrt(real * real + imag * imag);
	}
};

template <typename T>
T minumumModule(Complex z1, Complex  z2) {
	if (z1.modul() < z2.modul()) {
		return z1;
	}
	else {
		return z2;
	}
};

int main()
{
	Complex z1(20, 4);
	Complex z2(5, 12);
	Complex z = minumumModule<Complex>(z1, z2);
	cout << "The minimum module of two complex numbers is: \n" << z.real << " + " << z.imag << "i" << endl;

	return 0;

}
