#include<stdio.h>
#include<stdlib.h>
int main(){
    int num=33;
    int input;
    int n=0;
    do
    {
       printf("please enter the number you guess number between 0-99\n");
       scanf("%d",&input); /* code */
       if(input>num){
        printf("it is bigger\n");
       }
       else if(input<num){
        printf("it is smaller\n");
       }
       n++;
    } while (input!=num);
    printf("you are right and you guess %d time",n);
    system("pause");
    return 0;
}