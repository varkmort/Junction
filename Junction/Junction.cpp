#include <iostream>
#include <clocale>

#include <Windows.h>

void SimpleClac() {
    SetConsoleCP(1251); // ������� �������� ��� ��������� (Windows-1251)
    SetConsoleOutputCP(1251);
    std::cout << "��������� �����������\n";

    std::cout << "�������� ��������(������� �����):"<<
        "\t+ ��� ��������\n"<<
        "\t- ��� ���������\n"<<
        "\t* ��� ���������\n"<<
        "\t/ ��� �������\n";
    char operation{};
    std::cin >> operation;
    std::cin.ignore();

    double value1{};
    double value2{};

    std::cout << "������� ������ �����:";    
    std::cin >> value1;
    std::cin.ignore();

    std::cout << "������� ������ �����:";    
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
            std::cerr << "��� ������ ������\n";
        }
    }
    else {
        std::cerr << "������������ ��������\n";
    }

    std::cout << "��� ��������� " << result << '\n';

    std::cout << "������ �� �� ���������� ������[y|n]:";
    char answer{};
    std::cin >> answer;
    std::cin.ignore();

    if (answer == 'y') {
        std::cout << "������ �� �� ������������ ������ �����[y|n]:";
        char old{};
        std::cin >> old;
        std::cin.ignore();

        if (old == 'n') {
            std::cout << "������� ������ �����:";
            std::cin >> value1;
            std::cin.ignore();
            std::cout << "������� ������ �����:";
            std::cin >> value2;
            std::cin.ignore();
        }
        std::cout << "�������� ��������(������� �����):" <<
            "\t+ ��� ��������\n" <<
            "\t- ��� ���������\n" <<
            "\t* ��� ���������\n" <<
            "\t/ ��� �������\n";
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
                std::cerr << "��� ������ ������\n";
            }
        }
        else {
            std::cerr << "������������ ��������\n";
        }
        std::cout << "��� ��������� " << result << '\n';
    }
    std::cout << "����!";
}


int main()
{
    SimpleClac();
    return 0;
}