// 1.3.1.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	double Q,T;
	short N;
	cout << "введите начальную стоимость оборудования: Q,N: "<< endl;
	cin >> Q >> N;
	
	if (N<=0) {
		cout<<"неправильное выбран промежуток времени"<< endl;
		return 0;
	}
	T = Q / N;
	for (; N != 0; --N) {
		Q -= T;
		cout << Q<< endl;
	}
	return 0;
}

