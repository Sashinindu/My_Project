#include <stdio.h>
int main() {
float hight, weight, calcu;
printf("Enter Hight (m) -\n");
scanf ("%f", &hight);
printf("Enter weight (kg) -\n");
scanf ("%f", &weight);
calcu = weight / (hight * hight);
printf("BMI = %.2f\n", calcu );
if
(calcu < 18.5) {
printf("under weight");
}
else if
(calcu >= 18.5 && calcu <= 24.9) {
printf("normal weight");
}
else {
printf("overweight");
}

return 0;

}
