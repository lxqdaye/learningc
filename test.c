#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=10;
    int b=20;
    int count=0;
    for(a;a<=b;a++){
        count++;
        printf("%d ",a);
        if (count%5==0)
        {
            printf("\n");/* code */
        }
        
    }
    system("pause");

    return 0;
}