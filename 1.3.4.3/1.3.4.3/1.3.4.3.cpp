#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double Z, K, p, q;

	cout << "введите Z (зарплата в январе), K (корзина в январе), p (% роста зарплаты), q (% роста корзины): " << endl;
	cin >> Z >> K >> p >> q;

	for (short month = 2; month <= 12; ++month) {
		Z *= (1.0 + p / 100.0);
		K *= (1.0 + q / 100.0);

		double diff = Z - K;

		if (diff < 0) {
			cout << "в месяце " << month << " разность стала отрицательной: " << diff << endl;
			break;
		}

		cout << "месяц " << month << ": " << diff << endl;
	}

	return 0;
}