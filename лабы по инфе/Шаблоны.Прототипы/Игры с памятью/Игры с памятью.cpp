#include<iostream>
using namespace std;

int sum(int, int);// прототип функции
double sum(double, double);

template <typename Type1, typename Type2>
Type1 sum2(Type1 a, Type2 b) {
	return a + b;
}
int main() {
	cout << sum2(3, 6.7) << endl; //9, тк первый тип интовый => 6.7 становится 6
	cout << sum2(3.3, 6) << endl;
	cout << sum2<double>(13, 1.5) << endl;
	cout << sum(3, 2) << endl;
	cout << sum(3.1, 4.5) << endl;
}

int sum(int a, int b) {
	return a + b;
}
double sum(double a, double b)
{
	return a + b;
}