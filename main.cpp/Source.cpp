#include <iostream>

// новая функция
void calculateSum() {
    int a = 5, b = 10;
    cout << "Sum: " << a + b << endl;
}

void greet() {
    std::cout << "Hello from feature branch!" << std::endl;
}

int main() {
    std::cout << "Main program started" << std::endl;
    greet();
    return 0;
}