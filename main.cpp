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
		cout << "����� ����� ��������� ��� ��������:\n 1 - ��������������\n 2 - ��������\n 3 - ���\n 4 - �������� ������� �����\n 5 - ��������� ������ � ����\n 6 - ����� �� ���������\n"; cin >> choice;
		switch (choice)
		{
		case 1: cout << "������� ��������� �������� ��� ������\n"; 
			while ((a <= 0) || (b <= 0) || (c <= 0)) { cin >> a; cin >> b; cin >> c; cout << "������� ������������� ��������!\n"; }
			mass[current] = new Parallelepiped(a, b, c); figures[current] = "��������������(" + to_string(a).substr(0,5) + " ; " + to_string(b).substr(0,5) + " ; " + to_string(c).substr(0,5) + ") ----> ������� - "; current++; system("cls");
			break;
		case 2: cout << "������� ��������� �������� ��� ������\n"; while (a <= 0) { cin >> a; cout << "������� ������������� ��������!\n"; }
			mass[current] = new Tetrahedron(a); figures[current] = "��������(" + to_string(a).substr(0,5) + ") ----> ������� - "; current++; system("cls");
			break;
		case 3: cout << "������� ��������� �������� ��� ������\n"; while (a <= 0) { cin >> a; cout << "������� ������������� ��������!\n"; }
			mass[current] = new Ball(a); figures[current] = "���(" + to_string(a).substr(0, 5) + ") ----> ������� - "; current++; system("cls");
			break;
		case 4: system("cls");
			for (int i = 0; i < current; i++)
		{
			cout << figures[i];
			cout << mass[i]->square() << endl;
			} cout << "����� ����� - " << mass[current]->AllFigures << endl; system("pause");  break;
		case 5: for (int i = 0; i < current; i++)
		{
			file << figures[i];
			file << mass[i]->square() << endl;
		} file << "����� ����� - " + to_string(mass[current]->AllFigures); system("cls"); break;
		case 6: exit(0); 
		default: cout << "������� ���������� ��������! (1 - 6)\n"; break;
		}
	}
	
	file.close();
	delete[] mass;
	delete[] figures;
	
	
	

}