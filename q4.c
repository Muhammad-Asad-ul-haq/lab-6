#include <stdio.h>

int main() {
    int streak = 0;
    char photo;

    for (int i = 0; i < 1000; i++) {
        
        printf("Do you want to send streak (Y/N): ");
        scanf(" %c", &photo); 

        if (photo == 'n' || photo == 'N') {
            break;
        } 
        else if (photo == 'y' || photo == 'Y') {
            streak=streak+1;
        } 
        else {
            printf("Invalid input. Please enter Y or N\n");
        }
    }
    
    printf("Total streaks Count: %d\n", streak);
    return 0;
}
