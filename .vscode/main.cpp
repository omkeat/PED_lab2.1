#include <iostream>
#include <cmath>  // Для математичних функцій

using namespace std;

int main() {
    // Введення значень m та n
    double m, n;
    cout << "Введіть значення m: ";
    cin >> m;
    cout << "Введіть значення n: ";
    cin >> n;

    // Обчислення значення z1
    double z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) /
                (sqrt(pow(m, 3) * n) + n * m + pow(m, 2) - m);

    // Обчислення значення z2
    double z2 = (sqrt(m) - sqrt(n)) / m;

    // Виведення результатів
    cout << "Значення z1: " << z1 << endl;
    cout << "Значення z2: " << z2 << endl;

    return 0;
}