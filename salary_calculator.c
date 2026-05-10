#include <stdio.h>
int main() { 
const int BONUS_RATE = 5000; 
float salary, total, division1; 
int month, service_time, division2; 
printf("Enter your salary : "); 
scanf("%f", &salary);  
printf("Years of Service: "); 
scanf("%d", &service_time); 
++service_time; 
total = BONUS_RATE + salary; 
printf("This month salary : %.2f\n", total);
month = 1; 
month += 1; 
total += 2000; 
printf("Next month salary : %.2f\n", total); 
printf("Years of Service: %d\n", service_time); 
division1 = total / 3;
division2 = (int)total % 4;
printf("Your salary divided by three employees: %.2f\n", division1); 
printf("The balance after dividing your salary by four employees: %d\n", division2);

    return 0;
}
