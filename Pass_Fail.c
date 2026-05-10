#include<stdio.h>
int main()
{
    int m1, m2, sum, div; 
    
    printf("Enter ICT Marks:" );
    scanf("%d", &m1);
    
    printf("Enter Maths Marks:");
    scanf("%d", &m2);
    
    sum = m1+m2;
    div = (m2+m1)/2;
    printf("\nTotal marks= %d", sum);
    printf("\nAvg Mark= %d\n", div);
    printf("\nICT Result: ");
    if (m1>75) {
    printf("pass A. Great Job!\n");
} else if (m1>65) { 
    printf("pass B. Good Job!\n");
} else if (m1>55) { 
    printf("pass C. Good!\n");
} else if (m1>35) { 
    printf("pass S. Study well!!\n");
} else { 
printf("Fail. Try You Can Do It!\n");
 }   
 printf("\nMaths Result: ");
    if (m2>75) {
    printf("pass A. Great Job!\n");
} else if (m2>65) { 
    printf("pass B. Good Job!\n");
} else if (m2>55) { 
    printf("pass C. Good!\n");
} else if (m2>35) { 
    printf("pass S. Study well!!\n");
} else { 
printf("Fail. Try You Can Do It!\n");
 }   
    return 0;
}
