#include "l4.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	double r, phi, real, imaginary;
	cout << "������� \"����������� �����\" � ����:\n-������\n-��������\n������ ������������ �����:\nr = ";
	cin >> r;
	cout << "Phi = ";
	cin >> phi;
	real = r * cos(phi * 180 / 3.14);
	imaginary = r * sin(phi * 180/3.14);
	Complex z(real, imaginary);
	cout << "z = " << z << endl;
	cout << "2 + " << z << " * tg(" << z << ") = " << Complex(2, 0) + z * tg(z);
}