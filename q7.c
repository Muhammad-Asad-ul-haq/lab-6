#include <stdio.h>

int main() {
    int num, originalNum, sum = 0, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // counting number of digits
    while (originalNum > 0) {
        originalNum /= 10;
        count++;
    }

    originalNum = num; //reset original number

   // Calculate the sum of the digits raised to the power of count
    while (num > 0) {
        digit = num % 10;
        int power = 1;

        for (int i = 0; i < count; i++) {
            power = power*digit; // Raise digit to the power of count
        }

        sum = sum+power;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is an Armstrong number\n", originalNum);
    } 
    else {
        printf("%d is not an Armstrong number\n", originalNum);
    }

    return 0;
}
