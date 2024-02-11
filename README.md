#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");
	int i1, j1;
	int ctg = 1;
	cout << "Введите количество строк (от 1 до 50)" << endl;
	cin >> i1;
	cout << "Введите количество столбцов (от 1 до 50)" << endl;
	cin >> j1;
	int m[50][50];
	for (int i = 1; i <= i1; i++)
	{
		for (int j = 1; j <= j1; j++)
		{
			if ((i + j) % 2 != 0) 
			{
				m[i][j] = 0;
			}
			else {
				m[i][j] = ctg;
				ctg++;
			}
			if (ctg == 10) {
				ctg = 1;
			}
		}
	}
	cout << "Полученный массив:" << endl;
	for (int i = 1; i <= i1; i++)
	{
		for (int j = 1; j <= j1; j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

