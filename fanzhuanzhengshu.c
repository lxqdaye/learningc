#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("please enter a int number\n");
    scanf("%d",&num);
    while(num>0){
        int tempnum=num%10;
        num=num/10;
        printf("%d",tempnum);
    }
    system("pause");
    return 0;
}