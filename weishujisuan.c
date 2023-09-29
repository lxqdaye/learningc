#include<stdio.h>
#include<stdlib.h>
int main(){
    int m;
    int n=1;
    scanf("%d",&m);
    if(m/10<1){
        printf("%d/n",n);
    }
    else{
        while(m/10>=1){
            m=m%10;
            n++;
        }
        printf("%d/n",n);
    }
    system("pause");
    return 0;
}