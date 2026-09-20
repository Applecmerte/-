#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double Z, K, p;
	double Q = 0;
	double totalPercent = 0;

	cout << "введите зарплату (Z), коммунальные (K), процент (p) и начальный баланс (Q): " << endl;
	cin >> Z >> K >> p >> Q;

	for (short month = 12; month != 0; --month) {
		Q += (Z - K);
		double currentPercent = Q * (p / 100.0);
		totalPercent += currentPercent;
		Q += currentPercent;
	}

	cout << "начислено процентов за год: " << totalPercent << endl;

	return 0;
}