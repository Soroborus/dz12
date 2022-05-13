//������� ��� �������� �������


#include "complex.h"
//��������


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
//������� ��� ����� �
void partB() {
	ifstream l;	//����� �
	l.open("C://texts/complex.txt");
	int n = 0;
	string s;							//��������: ������ s ������������ ��� ���������� ����� a+b*i � ������ "����������" *i � �����
	l >> n;
	double max = 0;
	int index = 0;
	Complex* p = new Complex[n]; //������������ ������
	for (int i = 0; i < n; i++) {
		l >> p[i].re >> p[i].im >> s;				//��������� � ������ � ������� ������

		if (p[i].module() > max) {
			index = i;
			max = p[i].module();
		}
	}
	l.close();
	cout << "������������ ������ � " << index + 1 << " �������� (";
	p[index].out();
	cout << ") ������ " << p[index].module();
	delete [] p;
}
//����� ������
double Complex::module() {
	
	return sqrt(im*im+re*re);
}



bool operator>(const Complex& left, const Complex& right)
{
	return (left.im * left.im + left.re * left.re > right.im * right.im + right.re * right.re);
}


