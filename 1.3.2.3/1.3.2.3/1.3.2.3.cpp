#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double Q, T, p;
	short N;

	cout << "введите начальную стоимость оборудования, списание за 1-й год, процент и количество лет (Q, T, p, N): " << endl;
	cin >> Q >> T >> p >> N;

	if (N <= 0) {
		cout << "неправильное выбран промежуток времени" << endl;
		return 0;
	}

	for (; N != 0; --N) {
		Q -= T;
		cout << Q << endl;
		T *= (1.0 - p / 100.0);
	}

	return 0;
}