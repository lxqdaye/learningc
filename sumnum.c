#include<stdio.h>
#include<stdlib.h>
int sum(int a,int b);
void order(int a,int b);
int main(){
    int a;
    int b;
    do
    {
        printf("please enter two number between -100 100,first one smaller than second one\n");
        scanf("%d %d",&a,&b);/* code */
    } while (a<=-100&&a>=b&&b>=100&&a>=100&&b<=-100);
    order(a,b);
    int sumnum;
    sumnum=sum(a,b);
    printf("Sum=%d\n",sumnum);
    system("pause");
    return 0;
}
void order(int a,int b){
    
    
    int count=0;
    for(a;a<=b;a++){
        count++;
        printf("%5d",a);
        if (count%5==0)
        {
            printf("\n");
        }
    }
}
int sum(int a,int b){
    int sumnum=0;
    for(a; a<=b;a++){
        sumnum=sumnum+a;
    }
    return sumnum;
} 