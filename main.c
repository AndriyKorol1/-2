#include <stdio.h>
// ������� ��� ����������� ���������� �������� ������� (���) �� ���������� ������
int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
// ������� ��� ����������� ���������� �������� �������� (���) ���� �����
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int r;
    printf("������ ������� ����� r: ");
    scanf("%d", &r);
    if (r < 2 || r > 20) {
        printf("ʳ������ ����� ������� ���� � ������� �� 2 �� 20.\n");
        return 1;
    }
    int numbers[r];
    printf("������ %d ����������� �����: ", r);
    for (int i = 0; i < r; i++) {
        scanf("%d", &numbers[i]);
    }
    // ��������� ��� ��� ��� ����� � �����
    int result = numbers[0];
    for (int i = 1; i < r; i++) {
        result = lcm(result, numbers[i]);
    }
    printf("�������� ������ ������: %d\n", result);
    return 0;

}
