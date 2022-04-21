#include <iostream>
#include "figure.h"
#include "Balls.h"
#include "Parall.h"
#include "Tetra.h"
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	ofstream file;
	file.open("figures.txt");
	Figure* mass[15];
	
	int work = 1; int choice = 0; int current = 0; float a = 0; float b = 0; float c = 0;  string* figures = new string[100];

	while (work)
	{
		cout << "Какой класс наследник для создания:\n 1 - Параллелепипед\n 2 - Тетраэдр\n 3 - Шар\n 4 - Получить площади фигур\n 5 - Сохранить данные в файл\n 6 - Выход из программы\n"; cin >> choice;
		switch (choice)
		{
		case 1: cout << "Задайте начальные значения для фигуры\n"; 
			while ((a <= 0) || (b <= 0) || (c <= 0)) { cin >> a; cin >> b; cin >> c; cout << "Вводите положительные значения!\n"; }
			mass[current] = new Parallelepiped(a, b, c); figures[current] = "Паралеллепипед(" + to_string(a).substr(0,5) + " ; " + to_string(b).substr(0,5) + " ; " + to_string(c).substr(0,5) + ") ----> Площадь - "; current++; system("cls");
			break;
		case 2: cout << "Задайте начальные значения для фигуры\n"; while (a <= 0) { cin >> a; cout << "Вводите положительные значения!\n"; }
			mass[current] = new Tetrahedron(a); figures[current] = "Тетраэдр(" + to_string(a).substr(0,5) + ") ----> Площадь - "; current++; system("cls");
			break;
		case 3: cout << "Задайте начальные значения для фигуры\n"; while (a <= 0) { cin >> a; cout << "Вводите положительные значения!\n"; }
			mass[current] = new Ball(a); figures[current] = "Шар(" + to_string(a).substr(0, 5) + ") ----> Площадь - "; current++; system("cls");
			break;
		case 4: system("cls");
			for (int i = 0; i < current; i++)
		{
			cout << figures[i];
			cout << mass[i]->square() << endl;
			} cout << "Всего фигур - " << mass[current]->AllFigures << endl; system("pause");  break;
		case 5: for (int i = 0; i < current; i++)
		{
			file << figures[i];
			file << mass[i]->square() << endl;
		} file << "Всего фигур - " + to_string(mass[current]->AllFigures); system("cls"); break;
		case 6: exit(0); 
		default: cout << "Введите корректное значение! (1 - 6)\n"; break;
		}
	}
	
	file.close();
	delete[] mass;
	delete[] figures;
	
	
	

}