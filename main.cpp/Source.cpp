#include <iostream>

// Прототипы функций
void calculateSum();
void greet();
void showMessage();

// Новая функция для вычисления суммы
void calculateSum() {
    int a = 5, b = 10;
    std::cout << "Sum: " << a + b << std::endl;
}

// Функция приветствия
void greet() {
    std::cout << "Hello from feature branch!" << std::endl;
}

// Главная функция
int main() {
    std::cout << "Main program started" << std::endl;

    greet();
    calculateSum();
    showMessage();

    return 0;
}

// Дополнительное сообщение
void showMessage() {
    std::cout << "Feature branch work in progress" << std::endl;
}