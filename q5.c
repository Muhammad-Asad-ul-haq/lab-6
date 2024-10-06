#include <stdio.h>

int main() {
    int num, a;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for (a = 2; a < num; a++) {
        if (num % a == 0) {
            printf("%d is not a prime number\n", num);
            return 0;
        }
    }

    printf("%d is a prime number\n", num);
    return 0;
}
