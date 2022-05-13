//сделаны оба варианта заданий


#include "complex.h"
//действия


void Complex::out() {
	if (((im != -1)&&(im!=1))&&(im!=0)) {
		cout << im << "i";
	}
	else if (im == -1) {
		cout << "-i";
	}
	else if (im == 1) {
		cout << "i";
	}
	if (re > 0) {
		if (im != 0) {
			cout << "+" << re;
		}
		else {
			cout << re;
		}
	}
	else if (re < 0) {
		cout << re;
	}
	if ((im == 0) && (re == 0)) {
		cout << 0;
	}
	
}
//функция для части б
void partB() {
	ifstream l;	//часть Б
	l.open("C://texts/complex.txt");
	int n = 0;
	string s;							//поснение: строка s используется для считывания чисел a+b*i и просто "дочитывает" *i в конце
	l >> n;
	double max = 0;
	int index = 0;
	Complex* p = new Complex[n]; //динамический массив
	for (int i = 0; i < n; i++) {
		l >> p[i].re >> p[i].im >> s;				//считываем в массив и считаем модули

		if (p[i].module() > max) {
			index = i;
			max = p[i].module();
		}
	}
	l.close();
	cout << "Максимальный модуль у " << index + 1 << " элемента (";
	p[index].out();
	cout << ") равный " << p[index].module();
	delete [] p;
}
//поиск модуля
double Complex::module() {
	
	return sqrt(im*im+re*re);
}



bool operator>(const Complex& left, const Complex& right)
{
	return (left.im * left.im + left.re * left.re > right.im * right.im + right.re * right.re);
}


