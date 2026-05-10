#include <stdio.h>

int main() {
    int IT, CM, Physics, total; 
    float avg;
    printf("Enter your IT marks:-\n");
    scanf("%d",&IT);
    printf("Enter your Combined_maths marks:-\n");
    scanf("%d",&CM);
    printf("Enter your Physics marks:-\n");
    scanf("%d",&Physics); 
    if(IT >= 75) { 
    printf("IT has Distinction(A) pass\n");
    }
    else if(IT > 64 && IT <= 74) {
    printf("IT has Very good(B) pass\n");
    }
    else if(IT >= 50 && IT <= 64) {
    printf("IT has Credit(C) pass\n");
    }
    else if(IT >= 35 && IT <= 49) {
    printf("IT has Ordinary Pass(S) pass\n");
    }
    else if(IT <= 34) {
    printf("IT has Faill(F)\n");
    }
    if(CM >= 75) { 
    printf("Combined_maths has Distinction(A) pass\n");
    }
    else if(CM > 64 && CM <= 74) {
    printf("Combined_maths has Very good(B) pass\n");
    }
    else if(CM >= 50 && CM <= 64) {
    printf("Combined_maths has Credit(C) pass\n");
    }
    else if(CM >= 35 && CM <= 49) {
    printf("Combined_maths has Ordinary Pass(S) pass\n");
    }
    else if(CM <= 34) {
    printf("Combined_maths has Faill(F)\n");
    }
    if(Physics >= 75) { 
    printf("Physics has Distinction(A) pass\n");
    }
    else if(Physics > 64 && Physics <= 74) {
    printf("Physics has Very good(B) pass\n");
    }
    else if(Physics >= 50 && Physics <= 64) {
    printf("Physics has Credit(C) pass\n");
    }
    else if(Physics >= 35 && Physics <= 49) {
    printf("Physics has Ordinary Pass(S) pass\n");
    }
    else if(Physics <= 34) {
    printf("Physics has Faill(F)\n");
    }
    total = IT + CM + Physics; 
    avg = total / 3.0;
    printf("Your Total marks: %d\n"); 
    printf("Your average marks: %.2f\n"); 
    if(IT >= 35 && CM >= 35 && Physics >= 35) { 
    printf("Overall Results: PASS\n");
    }
    else {
    printf("Overall Results: FAILL");
    }
    
    
    

    return 0;
}
