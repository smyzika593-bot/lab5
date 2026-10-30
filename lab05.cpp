// Лабораторна робота 5 Робота з Git та GitHub
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // змінні для координат точки
    double x, y;

    // ведення координат x та y
    cout << "vedit x ta y: ";
    if (!(cin >> x >> y)) {
        // повідомлення про помилку якщо введено не числа
        cout << "pomylka vedit dva chysla";
        return 1;
    }

    // перевірка належності точки області разом із її межами
    if (x >= 0 && x <= 20 && y >= 0 &&
        y <= 5 - 0.5 * abs(x - 10)) {
        // результат якщо точка належить області
        cout << "tochka nalezhyt oblasti";
    }
    else {
        // результат якщо точка розташована поза областю
        cout << "tochka ne nalezhyt oblasti";
    }

    return 0;
}