#include <iostream>
#include <clocale>

#include <Windows.h>

void SimpleClac() {
    SetConsoleCP(1251); // Кодовая страница для кириллицы (Windows-1251)
    SetConsoleOutputCP(1251);
    std::cout << "Программа калькулятор\n";

    std::cout << "Выберете операцию(введите сивол):"<<
        "\t+ для сложения\n"<<
        "\t- для вычитания\n"<<
        "\t* для умножения\n"<<
        "\t/ для деления\n";
    char operation{};
    std::cin >> operation;
    std::cin.ignore();

    double value1{};
    double value2{};

    std::cout << "Введите первое число:";    
    std::cin >> value1;
    std::cin.ignore();

    std::cout << "Введите второе число:";    
    std::cin >> value2;
    std::cin.ignore();

    double result{};
    if (operation == '+') {
        result = value1 + value2;
    }
    else if (operation == '-') {
        result = value1 - value2;
    }
    else if (operation == '*') {
        result = value1 * value2;
    }
    else if (operation == '/') {
        if (value2 != 0) {
            result = value1 / value2;
        }
        else {
            std::cerr << "так делить нельзя\n";
        }
    }
    else {
        std::cerr << "некорректная операция\n";
    }

    std::cout << "Ваш результат " << result << '\n';

    std::cout << "Хотите ли вы продолжить работу[y|n]:";
    char answer{};
    std::cin >> answer;
    std::cin.ignore();

    if (answer == 'y') {
        std::cout << "Хотите ли вы использовать старые числа[y|n]:";
        char old{};
        std::cin >> old;
        std::cin.ignore();

        if (old == 'n') {
            std::cout << "Введите первое число:";
            std::cin >> value1;
            std::cin.ignore();
            std::cout << "Введите второе число:";
            std::cin >> value2;
            std::cin.ignore();
        }
        std::cout << "Выберете операцию(введите сивол):" <<
            "\t+ для сложения\n" <<
            "\t- для вычитания\n" <<
            "\t* для умножения\n" <<
            "\t/ для деления\n";
        std::cin >> operation;
        std::cin.ignore();

        if (operation == '+') {
            result = value1 + value2;
        }
        else if (operation == '-') {
            result = value1 - value2;
        }
        else if (operation == '*') {
            result = value1 * value2;
        }
        else if (operation == '/') {
            if (value2 != 0) {
                result = value1 / value2;
            }
            else {
                std::cerr << "так делить нельзя\n";
            }
        }
        else {
            std::cerr << "некорректная операция\n";
        }
        std::cout << "Ваш результат " << result << '\n';
    }
    std::cout << "Пока!";
}


int main()
{
    SimpleClac();
    return 0;
}