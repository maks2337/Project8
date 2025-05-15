//ПРАКТИЧЕСКАЯ РАБОТА № 5 Базовые алгоритмические структуры. Цикл. Задание 1: Разработать программу вывода чисел от 0 до 99 ниже главной диагонали
#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == i)
                break;
            else
                cout << 10 * (i - 1) + j << " ";
        }
        cout << endl;
    }
	return 0;
}