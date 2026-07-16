#include <stdio.h>
#include <math.h>
int main() {
    float weight;
    float height_cm;
    float height_m;
    float bmi;
    char bmi_range[40];
    printf("Enter your weight (kg): ");
    scanf("%f", &weight);
    printf("Enter your height (cm): ");
    scanf("%f", &height_cm);

    height_m = height_cm / 100;
    bmi = weight / (height_m * height_m);

    if (bmi < 18.5) { printf("BMI: %.2f underweight\n",bmi); }
    else if (bmi >= 18.5 && bmi < 24.9) { printf("BMI: %.2f normal\n",bmi); }
    else if (bmi >= 25 && bmi < 29.9) { printf("BMI: %.2f overweight\n",bmi); }
    else { printf("BMI: %.2f obese\n",bmi); }

    return 0;
}