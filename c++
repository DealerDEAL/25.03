#include <iostream>
#include <cmath>

int main() {
    double m, b, t, c, z;

    // Запрос ввода исходных данных у пользователя
    std::cout << "Введите значение m: ";
    std::cin >> m;

    std::cout << "Введите значение b: ";
    std::cin >> b;

    std::cout << "Введите значение t: ";
    std::cin >> t;

    std::cout << "Введите значение c: ";
    std::cin >> c;

    // Вычисление значения выражения z
    z = m * cos(b * t * sin(t)) + c;

    // Вывод исходных данных и результата вычислений
    std::cout << "\nИсходные данные:" << std::endl;
    std::cout << "m = " << m << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "t = " << t << std::endl;
    std::cout << "c = " << c << std::endl;

    std::cout << "\nРезультат вычислений:" << std::endl;
    std::cout << "z = " << z << std::endl;

    return 0;
}
