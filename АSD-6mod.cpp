 #include <iostream>
#include<windows.h>
using namespace std;

// Функція для обчислення суми перших n натуральних чисел
int sumOfFirstN(int n) {

    
    if (n == 0) {
        return 0; // Базовий випадок: сума перших 0 натуральних чисел дорівнює 0
    }
    else {
        return n + sumOfFirstN(n - 1); // Рекурсивний виклик для обчислення суми перших (n-1) натуральних чисел та додавання n
    }
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int n;
    cout << "Введіть кількість натуральних чисел для обчислення суми: ";
    cin >> n;

    int sum = sumOfFirstN(n);
    cout << "Сума перших " << n << " натуральних чисел: " << sum << endl;

    return 0;
}