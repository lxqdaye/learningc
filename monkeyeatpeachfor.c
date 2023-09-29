#include<stdio.h>

#include <stdlib.h>
int main()
{
    printf("please enter day of monkey eat peach\n");
    int dayNum;
    scanf("%d", &dayNum);
    int left=1;
    int N = 0;
    for(dayNum; dayNum >1; dayNum--) {
         left= 2 * left + 2;
         N = left;
    }
    printf("%d\n", N);
    system("pause");
    return 0;
}