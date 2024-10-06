

#include <stdio.h>

int main() {
    int num, a;
    int b = 0, c = 1, z;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("%d is not a prime number\n", num);
        return 0;
    }

    for (a = 2; a * a <= num; a++) {
        if (num % a == 0) {
            printf("%d is not a prime number\n", num);
            return 0;
        }
    }

    printf("%d is a prime number\n", num);
    
    printf("Series is = ");
    while (b <= num) {
        printf("%d ", b);
        z = b + c;
        b = c;
        c = z;
    }
    
    printf("\n");
    return 0;
}
