// 1.3.1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	double Q, T;
	short N;
	cout << "введите начальную стоимость оборудования: Q,T,N: "<< endl;
	cin >> Q >> T >> N;
	if (N<=0) {
		cout<<"неправильное выбран промежуток времени"<< endl;
		return 0;
	}
	for (; N != 0; --N) {
		Q -= T;
		cout << Q<< endl;
	}
	return 0;
}

