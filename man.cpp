#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    double chh;
    char sk;

    std::cout << "Введите сумму покупки: ";
    std::cin >> chh;

    std::cout << "Введите код скидки: ";
    std::cin >> sk;

    if (sk == 'D' || sk == 'd') {
        double a = chh - (chh * 0.1);
        std::cout << "Итоговая сумма к оплате: " << a << std::endl;
    }
    else if (sk == 'S' || sk == 's') 
    {
        double b = chh - (chh * 0.2);
        std::cout << "Итоговая сумма к оплате: " << b << std::endl;
    }
    else {
        std::cout << "Неверный код скидки!\n";
        std::cout << "Итоговая сумма к оплате: " << chh << std::endl;
    }

    system("pause");

    return 0;
}