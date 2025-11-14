#include <iostream>
#include <cmath>
#include <limits>
#include <format>
#include <string>
#include <Windows.h>

using namespace std;

//Завдання 15

bool parnist(int a, int b) {
	return (a % 2) == (b % 2);
}

bool ostacha(int a, int b) {
	if (b == 0) {
		cout << "Помилка! Ділення на нуль неможливе." << endl;
		return false;
	}
	else {
		return a % b == 0;
	}
}

void task15() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	cout << "Введіть значення a: ";
	cin >> a;
	cout << "Введіть число b: ";
	cin >> b;
	bool is_parnist = parnist(a, b);
	bool is_ostacha = ostacha(a, b);
	cout << "Числа мають однакову парність: " << (is_parnist ? "Так" : "Ні") << endl;
	cout << "Число a ділиться на число b без остачі: " << (is_ostacha ? "Так" : "Ні") << endl;
}

//Завдання 16

int countSolutions(int a, int b, int c) {
	if (a == 0) {
		if (b == 0) {
			return (c == 0) ? -1 : 0;
		}
		return 1;
	}
	int D = b * b - 4 * a * c;
	if (D > 0) {
		return 2;
	}
	else if (D == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void task16() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b, c;
	cout << "Введіть значення першого коефіцієнта а:\n";
	cin >> a;
	cout << "Введіть значення другого коефіцієнта b:\n";
	cin >> b;
	cout << "Введіть значення третього коефіцієнта c:\n";
	cin >> c;
	int solutions = countSolutions(a, b, c);
	cout << "Кількість розв'язків рівняння (ax^2 + bx + c):" << solutions;
}

// Завдання 17

bool is_suitable(double a, double b, double c, double x, double y) {
	bool check_ab = (a <= x && b <= y) || (a <= y && b <= x);
	bool check_ac = (a <= x && c <= y) || (a <= y && c <= x);
	bool check_bc = (b <= x && c <= y) || (b <= y && c <= x);
	return check_ab || check_ac || check_bc;
}

void task17() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, x, y;
	cout << "Введіть довжини ребер цеглини: ";
	cin >> a >> b >> c;
	cout << "Введіть сторони вікна: ";
	cin >> x >> y;
	bool pass = is_suitable(a, b, c, x, y);
	cout << "Цеглина може пройти у вікно: " << (pass ? "Так" : "Ні") << endl;
}
// Завдання 18

int main() {
	cout << "Hello, World!" << endl;
}

int main() {
	//task15();
	task16();
	//task17();
	return 0;
}