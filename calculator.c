#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int m = 0;
int t = 0;
float i = 0.0;
float result = 0.0;
float pv = 0.0;
float fv = 0.0;
float APR = 0.0;

void getfv() {
    printf("Please enter interest: ");
    scanf("%f", &i);
    printf("Please enter pv: ");
    scanf("%f", &pv);
    printf("Please enter t: ");
    scanf("%d", &t);
}

void getpv() {
    printf("Please enter interest: ");
    scanf("%f", &i);
    printf("Please enter fv: ");
    scanf("%f", &fv);
    printf("Please enter t: ");
    scanf("%d", &t);
}

void getaprfv() {
    printf("Please enter interest: ");
    scanf("%f", &i);
    printf("Please enter pv: ");
    scanf("%f", &pv);
    printf("Please enter t: ");
    scanf("%d", &t);
    printf("Please enter m: ");
    scanf("%d", &m);
}

float calculateaprfv(float pv, float i, int t, int m) {
    float aprfv = 0.0;
    aprfv = pv * pow((1 + i / t), t * m);
    return aprfv;
}

float calculatefv(float pv, float i, int t) {
    result = pv * pow((1 + i), t);
    return result;
}

float calculatepv(float fv, float i, int t) {
    result = fv * pow((1 + i), -t);
    return result;
}

int main(int argc, char const *argv[]) {
    int choice;
    
    printf("Please enter a number (1-3):\n1 - Calculate fv\n2 - Calculate aprfv\n3 - Calculate pv\n");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            getfv();
            result = calculatefv(pv, i, t);
            printf("Future Value: %.2f\n", result);
            break;
        case 2:
            getaprfv();
            result = calculateaprfv(pv, i, t, m);
            printf("APR Future Value: %.2f\n", result);
            break;
        case 3:
            getpv();
            result = calculatepv(fv, i, t);
            printf("Present Value: %.2f\n", result);
            break;
        default:
            printf("Invalid choice.\n");
    }

    system("pause");
    return 0;
}

