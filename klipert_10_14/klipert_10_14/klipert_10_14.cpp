// klipert_10_14.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include "taylor.h"
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cosToTaylor test;
	cin >> test;
	cout << test;
	system("Pause");
	return 0;
}

