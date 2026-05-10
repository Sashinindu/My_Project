#include<stdio.h> 
int main(){ 
    const int fix = 500;
    int units, bill, total_bill; 
    float Discount, new_bill;
    printf("Enter your monthly units : ");
    scanf("%d", &units);  
    if (units < 100) {  
    bill = units * 10;  
    } 
    else if (units >=100 && units <200) { 
        bill = (100 * 10) + ((units - 100) * 20); 
    } 
    else {
        bill = (100 * 10) + (100 * 20) + ((units - 200) * 40); 
    } 
    total_bill = fix + bill;
    printf("Your Bill: %d\n", total_bill); 
    if (total_bill > 5000) { 
        Discount = total_bill * 0.05;  
        new_bill = total_bill - Discount;
        printf("Your Discount Price is : %.2f\n", Discount);  
        printf("The amount payble : %.2f\n", new_bill);
    }
    
     else {
            printf("You have not any Discount.\n"); 
     }
        printf("Thank You for Using This Application!\n");
    
    
    
    return 0; 
}
