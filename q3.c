#include <stdio.h>

int main() {
    const int correctPin = 8742; 
    int userPin; 
    int attempts = 0; 

    while (attempts < 3) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &userPin);

        if (userPin == correctPin) {
            printf("Access granted \n");
            return 0;
           
        } 
        else {
            attempts=attempts+1; 
            printf("Incorrect PIN  \nAttempts left: %d\n", 3 - attempts);
        }
    }

    printf("Card is blocked because of too many incorrect attempts\n");
    return 0; 
}
