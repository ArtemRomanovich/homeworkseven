#include <iostream>

int main() {
    for (int i = 1; i < 10; i++) {
        printf("5*%i=%i\n", i, 5*i);
    }

    int a = 0;
    while (a!=7) {
        printf("Введите число: \n");
        scanf("%i", &a);
        if (a > 7) {
            if (a > 10) {
                printf("Число больше 10\n");
            } else {
                printf("Число больше 7, но меньше 10\n");
            }
        } else if (a < 7) {
            printf("Число меньше 7\n");
        } else {
            printf("Ты угадал, красава");
        }
        if ((a%2)==0) {
            printf("Число делится на 2\n");
        }
        if ((a%3)==0) {
            printf("Число делится на 3\n");
        }
    }
    return 0;
}
