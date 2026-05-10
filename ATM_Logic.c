#include <stdio.h>

int main() {
int choice, withdraw, deposit;
float balance = 50000, amount, Reminder;

printf("1. Check Balance\n2. Withdraw\n3. Deposit\nEnter choice: ");
scanf("%d", &choice); 
if (choice >= 1 && choice <= 3) {
switch (choice) {
case 1: 
printf("Your Account Balance is : %.2f\n", balance); 
break; 
case 2: 
printf("Enter Amount : "); 
scanf("%d", &withdraw); 
if (balance > withdraw) { 
    Reminder = balance - withdraw; 
    printf("Your Account Balance : %.2f\n", Reminder); 
}
else { 
    printf("Insufficient Balance\n"); 
}
break; 
case 3: 
printf("Deposit Amount : ");
scanf("%d", &deposit); 
balance += deposit; 
printf("Your Account Balance : %.2f\n", balance); 
break;
} } 
else { 
    printf("Invaild Input! Check Again.") ;
}
    return 0;
}
