#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int t;
    float a;
    float p;
    float i;
    printf("Please enter interest: ");
    scanf("%f", &i);
    printf("Please enter a: ");
    scanf("%f", &a);
    printf("Please enter t: ");
    scanf("%d", &t);
    p=a*((1-pow(1+i,-t))/i);
    printf("%f",p);
    system("pause");
    return 0;
}
