#include <stdio.h>

int main() {
    int a,sum;
    sum=0;
    
    printf("Enter a number( program will stop if 0 is entered) :");
    scanf("%d",&a);
    
    while(a !=0){
        sum=sum+a;
        a=sum;
        printf("your sum is: %d \n",a);
        
        printf("Enter a number( program will stop if 0 is entered) :");
        scanf("%d",&a);
    
    }
    
        printf("program stopped");
    

    return 0;
}