#include <stdio.h>

main() {
    float weightInKg, heightInM, bmi;

    printf("User's weight: ");
    scanf("%f", &weightInKg);
    printf("User's height: ");
    scanf("%f", &heightInM);

    bmi = (weightInKg / (heightInM * heightInM));

    printf("BMI VALUE\n");

    if (bmi < 18.5) {
        printf("You're Underweight.\n");
    }
    if (bmi > 18.5 && bmi < 24.9) {
        printf("You're Normal.\n");
    }
    if (bmi > 25 && bmi < 29.9) {
        printf("You're Overweight.\n");
    }
    if (bmi >= 30) {
        printf("You're Obese.\n");
    }

    return 0;
}
