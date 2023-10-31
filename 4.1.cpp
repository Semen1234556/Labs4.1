// Lab_03_4.cpp
// < Довголуцький Семен >
// Лабораторна робота № 4.1
// Розгалуження, задане плоскою фігурою.
// Варіант 19
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "N = "; cin >> N;
	cout << "k = "; cin >> k;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (sin(i) * cos(i)) / (1 + sin(i) * sin(i));
		i++;
	}
	cout << S << endl;

	S = 0;
	i = k;
	do {
		S += (sin(i) * cos(i)) / (1 + sin(i) * sin(i));
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (sin(i) * cos(i)) / (1 + sin(i) * sin(i));
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (sin(i) * cos(i)) / (1 + sin(i) * sin(i));
	}
	cout << S << endl;
	return 0;
}
