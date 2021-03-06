// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>



using namespace std;



class Complex {

public:

	double Im, Re;

	Complex() :Re(0.0), Im(0.0) {}; //конструктор

	Complex(double re, double im) : Re(re), Im(im) {} //конструктор с параметрами



	void print(ostream& os) { //метод вывода в поток (наследование класса std::ostream 
		//с обеспечением возможности использования перегруженного оператора '<<';
		//здесь и в 2 следующих методах мы используем ссылки в качестве параметров
		//в функциях (ссылка-параметр работает как псевдоним аргумента, и сам аргумент не копируется при передаче в параметр,
		//что в свою очередь улучшает производительность, если аргумент слишком большой;
		//также метод, использующий ссылку-параметр, может изменять аргумент, переданный ей, напрямую

		if (Im < 0) {

			os << Re << Im << "i" << endl;

		}
		else {

			os << Re << "+" << Im << "i" << endl;

		}

	}





	Complex add(Complex& other) { //далее идут алгебраические методы

		return Complex(Re + other.Re, Im + other.Im);

	}

	Complex sub(Complex& other) {

		return Complex(Re - other.Re, Im - other.Im);

	}

	Complex mul(int number) {

		return Complex(Re*number, Im*number);

	}

	Complex div(int number) {

		try {  //начало блока исключений

			if (number == 0) {

				throw 1; //"возбуждение исулючение с помощью throw

			}

			Re = Re / number;

			Im = Im / number;

		}
		catch (int number) { //начало блока, ловящего исключение

			cout << "Division by zero" << endl;



		}

		return Complex(Re, Im);

	}



};

int main()
{
	double Im_1, Im_2, Re_1, Re_2;

	int chislo;


	char answer = 'y';

	setlocale(LC_ALL, "Russian");



	while (answer == 'y') {

		cout << "Введите 2 комплексных числа: " << endl;

		cout << "\n";



		cout << "Параметры первого числа: ";

		cin >> Re_1 >> Im_1;



		cout << "Параметры второго числа: ";

		cin >> Re_2 >> Im_2;



		Complex complex_1(Re_1, Im_1);

		Complex complex_2(Re_2, Im_2);



		cout << "\n";

		cout << "Первое число: ";

		complex_1.print(cout);



		cout << "Второе число: ";

		complex_2.print(cout);

		cout << "\n";

		cout << "Методы: \n 1) сложение \n 2) вычитание"

			"\n 3) умножение на число типа int \n 4) деление на число "

			"типа int \n Введите номер метода: ";

		int choose;

		cin >> choose;

		cout << "\n";



		switch (choose) {

		case 1:

			cout << "Сложение: ";

			complex_1.add(complex_2).print(cout);

			break;

		case 2:

			cout << "Вычитание: ";

			complex_1.sub(complex_2).print(cout);

			break;

		case 3:



			cout << "Введите число типа int: ";

			cin >> chislo;

			cout << "\n";

			cout << "Умножение первого числа: ";

			complex_1.mul(chislo).print(cout);



			cout << "Умножение второго числа: ";

			complex_2.mul(chislo).print(cout);

			break;

		case 4:

			cout << "Введите число типа int: ";

			cin >> chislo;



			cout << "\n";



			cout << "Деление первого числа: ";

			complex_1.div(chislo).print(cout);



			cout << "Деление второго числа: ";

			complex_2.div(chislo).print(cout);

			break;

		default:

			cout << "Неверный номер метода";

		}

		cout << "\n";



		cout << "Продолжить? [y/n] ";

		cin >> answer;

		cout << "\n";


	}
	system("PAUSE");
    return 0;
}

