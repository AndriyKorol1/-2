#include <stdio.h>
// Функція для знаходження найбільшого спільного дільника (НСД) за алгоритмом Евкліда
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
// Функція для знаходження найменшого спільного кратного (НСК) двох чисел
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int r;
    printf("Введіть кількість чисел r: ");
    scanf("%d", &r);
    if (r < 2 || r > 20) {
        printf("Кількість чисел повинна бути в діапазоні від 2 до 20.\n");
        return 1;
    }
    int numbers[r];
    printf("Введіть %d натуральних чисел: ", r);
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]);
    }
    // Знаходимо НСК для всіх чисел у масиві
    int result = numbers[0];
    for (int i = 1; i < r; i++) {
        result = lcm(result, numbers[i]);
    }
    printf("Найменше спільне кратне: %d\n", result);
    return 0;

}
