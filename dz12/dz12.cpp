#include "complex.h"
#include<iostream>
#include<string>
using namespace std;
int main() {
	Complex a(0, 2.5);
	Complex b(11, 0);
	Complex c(0, 8);
	auto ar = new Complex[3]{ a,b,c };
	sort_p(ar, 3);
	for (int i = 0; i < 3; i++) {
		ar[i].out();
		cout << endl;
	}
 return 0;
}
