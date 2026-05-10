#include<stdio.h> 
int main(){ 
    int number1, number2, Addition, subtraction, multiply, variable; 
    printf("Enter First Number: ");
    scanf("%d", &number1);
    printf("Enter Second Number: "); 
    scanf("%d", &number2); 
    printf("What do you want? \n Addtion = 1 \n Subtraction = 2 \n Multiplication = 3\n");
    scanf("%d", &variable);
    switch(variable) { 
        case 1: 
        Addition = number1 + number2; 
        printf("Addition is: %d\n", Addition);
        break; 
        case 2: 
        if (number1 > number2) { 
            subtraction = number1 - number2; 
            printf("Subtraction is : %d\n", subtraction); 
        }
            else { 
                subtraction = number2 - number1; 
                printf("Subtraction is : %d\n", subtraction);
            }  
            break;
            case 3: 
            multiply = number1 * number2; 
            printf("Multiply is: %d\n", multiply); 
            break; 
        
    }
    
    
    return 0; 
}
