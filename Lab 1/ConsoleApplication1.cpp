// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <limits>
#include <iomanip>


using namespace std;



template <class T> class Print_Size {

public:

	T var;

	Print_Size(T var) : var(var) {} // список инициализации (эквивалентно конструктору Print_Size(T var) { this->var=var; })

	T print_size() {

		cout << "Размер типа переменной " << var << " : " << sizeof(T) << endl;
		return 0;
	}
};

int main()
{
	bool a14;

	int a1;

	char a2;

	short a3;

	long a4;

	float a5;

	double a6;

	long long a7;

	long double a8;

	unsigned char a9;

	unsigned short a10;

	unsigned int a11;

	unsigned long a12;

	unsigned long long a13;

	
	setlocale(LC_ALL, "Russian");

	cout << left << setw(19) << "Типы" //выравнивание по левой границе с установкой ширины поля 19
		<< right << setw(5) << "Размер"
		<< setw(30) << "МИН"
		<< setw(30) << "МАКС" << endl
		<< left << setw(19) << "short"
		<< right << setw(5) << sizeof(short) << setw(30)
		<< numeric_limits<short>::min() << setw(30) //константы с минимальным и максимальным значением типов
		<< numeric_limits<short>::max() << endl
		<< left << setw(19) << "unsigned short"
		<< right << setw(5) << sizeof(unsigned short) << setw(30)
		<< numeric_limits<unsigned short>::min() << setw(30)
		<< numeric_limits<unsigned short>::max() << endl
		<< left << setw(19) << "int"
		<< right << setw(5) << sizeof(int) << setw(30)
		<< numeric_limits<int>::min() << setw(30)
		<< numeric_limits<int>::max() << endl
		<< left << setw(19) << "unsigned int"
		<< right << setw(5) << sizeof(unsigned int) << setw(30)
		<< numeric_limits<unsigned int>::min() << setw(30)
		<< numeric_limits<unsigned int>::max() << endl
		<< left << setw(19) << "long"
		<< right << setw(5) << sizeof(long) << setw(30)
		<< numeric_limits<long>::min() << setw(30)
		<< numeric_limits<long>::max() << endl
		<< left << setw(19) << "unsigned long"
		<< right << setw(5) << sizeof(unsigned long) << setw(30)
		<< numeric_limits<unsigned long>::min() << setw(30)
		<< numeric_limits<unsigned long>::max() << endl
		<< left << setw(19) << "long long"
		<< right << setw(5) << sizeof(long long) << setw(30)
		<< numeric_limits<long long>::min() << setw(30)
		<< numeric_limits<long long>::max() << endl
		<< left << setw(19) << "unsigned long long"
		<< right << setw(5) << sizeof(unsigned long long) << setw(30)
		<< numeric_limits<unsigned long long>::min() << setw(30)
		<< numeric_limits<unsigned long long>::max() << endl
		<< left << setw(19) << "float"
		<< right << setw(5) << sizeof(float) << setprecision(8) << setw(30)
		<< numeric_limits<float>::min() << setw(30)
		<< numeric_limits<float>::max() << endl
		<< left << setw(19) << "double"
		<< right << setw(5) << sizeof(double) << setprecision(16) << setw(30)
		<< numeric_limits<double>::min() << setw(30)
		<< numeric_limits<double>::max() << endl
		<< left << setw(19) << "long double"
		<< right << setw(5) << sizeof(long double) << setprecision(20) << setw(30)
		<< numeric_limits<long double>::min() << setw(30)
		<< numeric_limits<long double>::max() << endl
		<< left << setw(19) << "char"
		<< right << setw(5) << sizeof(char) << setw(30)
		<< (int)numeric_limits<char>::min() << setw(30) //вывод char как интегральных значений
		<< (int)numeric_limits<char>::max() << endl
		<< left << setw(19) << "boolean"
		<< right << setw(5) << sizeof(bool) << setw(30)
		<< (int)numeric_limits<bool>::min() << setw(30)
		<< (int)numeric_limits<bool>::max() << endl;

	cout << "Введите переменную типа bool: " << endl;

	cin >> a14;

	Print_Size<bool> type_print_14(a14); //объект шаблона класса

	type_print_14.print_size();

	cout << "Введите переменную типа int: " << endl;

	cin >> a1;

	Print_Size<int> type_print_1(a1);

	type_print_1.print_size();



	cout << "Введите переменную типа char: " << endl;

	cin >> a2;

	Print_Size<char> type_print_2(a2);

	type_print_2.print_size();



	cout << "Введите переменную типа short: " << endl;

	cin >> a3;

	Print_Size<short> type_print_3(a3);

	type_print_3.print_size();



	cout << "Введите переменную типа long: " << endl;

	cin >> a4;

	Print_Size<long> type_print_4(a4);

	type_print_4.print_size();



	cout << "Введите переменную типа float: " << endl;

	cin >> a5;

	Print_Size<float> type_print_5(a5);

	type_print_5.print_size();



	cout << "Введите переменную типа double: " << endl;

	cin >> a6;

	Print_Size<double> type_print_6(a6);

	type_print_6.print_size();

	cout << "Введите переменную типа long long: " << endl;

	cin >> a7;

	Print_Size<long long> type_print_7(a7);

	type_print_7.print_size();

	cout << "Введите переменную типа long double: " << endl;

	cin >> a8;

	Print_Size<long double> type_print_8(a8);

	type_print_8.print_size();

	cout << "Введите переменную типа unsigned char: " << endl;

	cin >> a9;

	Print_Size<unsigned char> type_print_9(a9);

	type_print_9.print_size();

	

	cout << "Введите переменную типа unsigned short: " << endl;

	cin >> a10;

	Print_Size<unsigned short> type_print_10(a10);

	type_print_10.print_size();



	cout << "Введите переменную типа unsigned int: " << endl;



	cin >> a11;

	Print_Size<unsigned int> type_print_11(a11);

	type_print_11.print_size();



	cout << "Введите переменную типа unsigned long: " << endl;

	cin >> a12;

	Print_Size<unsigned long> type_print_12(a12);

	type_print_12.print_size();

	cout << "Введите переменную типа unsigned long long: " << endl;

	cin >> a13;

	Print_Size<unsigned long long> type_print_13(a13);

	type_print_13.print_size();

	
	system("PAUSE");
    return 0;
}

