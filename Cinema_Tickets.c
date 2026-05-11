#include <stdio.h>

int main() {
char classes[3][15] = { 
    "1. ODC ", "2. Balcony ","3. BOX " 
}; 
float prices[3] = { 
    650.00,
    850.00,
    1000.00
}; 
int choice; 
float total = 0; 

printf("__Welcome Shesh Cinema__\n\n"); 
printf("__Price List__\n"); 

for(int i = 0; i < 3; i++) { 
    printf("%s : %.2f\n", classes[i], prices[i]); 
} 

while(1) { 
    printf("\nEnter Class (1-3) or 0 to End : "); 
    scanf("%d", &choice); 
    if (choice == 0) { 
        break; 
    } 
    if (choice >= 1 && choice <= 3) { 
        printf("Added : %s\n", classes[choice-1]); 
        total += prices[choice-1]; 
    } 
    else { 
        printf("Invalid input! Try Again!"); 
    } 
}
    printf("\n--- Final Bill: %.2f ---\n\n", total); 
    printf("Thank You and Come Again! \n.....Shesh Cinema Team.....");
    return 0;
}
