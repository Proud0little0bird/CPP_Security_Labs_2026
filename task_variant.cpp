#include <iostream>
#include <cmath>    // Для std::sqrt и std::pow
#include <iomanip>  // Для форматированного вывода (setprecision)

int main() {
    // Приветствие
    std::cout << "==========================================" << std::endl;
    std::cout << " Лабораторная работа №1. Вариант 2" << std::endl;
    std::cout << " Вычислить евклидово расстояние между" << std::endl;
    std::cout << " двумя точками на плоскости" << std::endl;
    std::cout << " Выполнил: Башкатова Валерия Ильинична" << std::endl;
    std::cout << " Группа: КБ(с)-61 / ТОГУ" << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;

    // Координаты точек
    double x1 = 0.0, y1 = 0.0;
    double x2 = 0.0, y2 = 0.0;

    // Ввод координат точки A
    std::cout << "Введите координаты точки A (x1 y1): ";
    std::cin >> x1 >> y1;

    // Ввод координат точки B
    std::cout << "Введите координаты точки B (x2 y2): ";
    std::cin >> x2 >> y2;

    // Вычисление расстояния
    double dx = x2 - x1;
    double dy = y2 - y1;
    double distance = std::sqrt(std::pow(dx, 2) + std::pow(dy, 2));

    // Вывод результата с точностью до 3 знаков
    std::cout << "\n--- РЕЗУЛЬТАТ ---" << std::endl;
    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Точка A: (" << x1 << ", " << y1 << ")" << std::endl;
    std::cout << "Точка B: (" << x2 << ", " << y2 << ")" << std::endl;
    std::cout << "Евклидово расстояние d = " << distance << std::endl;
    std::cout << "==========================================" << std::endl;

    return 0;
}