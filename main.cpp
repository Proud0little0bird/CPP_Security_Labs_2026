#include <iostream>

int main() {
    // 1. Приветствие и идентификация студента
    std::cout << "==========================================" << std::endl;
    std::cout << " Лабораторная работа №1 по C++" << std::endl;
    std::cout << " Выполнил: Башкатова Валерия Ильинична" << std::endl;
    std::cout << " Группа: КБП(с)-61 / ТОГУ" << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;

    // 2. Ввод исходных данных
    long long a = 0;
    long long b = 0;

    std::cout << "Введите первое целое число (A): ";
    std::cin >> a;

    std::cout << "Введите второе целое число (B): ";
    std::cin >> b;

    std::cout << "\n--- РЕЗУЛЬТАТЫ ВЫЧИСЛЕНИЙ ---" << std::endl;

    // 3. Базовые арифметические операции
    std::cout << "A + B = " << (a + b) << std::endl;
    std::cout << "A - B = " << (a - b) << std::endl;
    std::cout << "A * B = " << (a * b) << std::endl;

    // 4. Безопасное деление (Защита от сбоя при B == 0)
    if (b != 0) {
        std::cout << "A / B (целочисленное) = " << (a / b) << std::endl;
        std::cout << "A % B (остаток от деления) = " << (a % b) << std::endl;
        std::cout << "A / B (вещественное) = " << (static_cast<double>(a) / b) << std::endl;
    } else {
        std::cout << "ОШИБКА БЕЗОПАСНОСТИ: Деление на 0 запрещено!" << std::endl;
    }

    std::cout << "==========================================" << std::endl;
    return 0;
}