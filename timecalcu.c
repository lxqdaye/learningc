#include <stdio.h>
#include <stdlib.h>

int main() {
    int hour = 0;
    int mintue = 0;
    int hour1 = 0;
    int mintue1 = 0;
    double outcomehour = 0.0;
    int outcomemintue = 0;
    int number = 2;

    printf("please enter the hour and mintue\n");
    scanf("%d %d", &hour, &mintue);
    
    printf("please enter the hour and mintue\n");
    scanf("%d %d", &hour1, &mintue1);

    printf("please enter 1 or 2 to choose which outcome you prefer '1' is hour outcome '2' is minutes\n");
    scanf(" %d", &number);

    switch (number) {
        case 1:
            if (hour > hour1) {
                outcomehour = ((hour * 60 + mintue) - (hour1 * 60 + mintue1)) / 60.0;
                printf("%lfhour\n", outcomehour);
            } else {
                outcomehour = ((hour1 * 60 + mintue1) - (hour * 60 + mintue)) / 60.0;
                printf("%lfhour\n", outcomehour);
            }
            break;
        case 2:
            if (hour > hour1) {
                outcomemintue = (hour * 60 + mintue) - (hour1 * 60 + mintue1);
                printf("%dmintue\n", outcomemintue);
            } else {
                outcomemintue = (hour1 * 60 + mintue1) - (hour * 60 + mintue);
                printf("%dmintue\n", outcomemintue);
            }
            break;
        default:
            break;
    }

    system("pause");
    return 0;
}