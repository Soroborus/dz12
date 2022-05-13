#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

class Complex {
public:
	Complex() {

	}
	Complex(double a, double b) {
		im = a;
		re = b;
	}
	~Complex(){

	}
	double im = 0;
	double re = 0;


	void out();
	double module();
	friend bool operator>(const Complex& left, const Complex& right);
	 Complex& operator=(Complex& right) = default;
	
};




template <class A>
void sort_p(A* a, int size)
{
	A temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

#endif
