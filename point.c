// 学习指针
#include<stdio.h>
#include<stdlib.h>
void example0(){
    int var_runoob = 10; //定义一个值
    int *p; // 定义指针变量
    printf("p address before: %p\n",p); 
    p = &var_runoob;
    
   printf("p address now : %p\n", p);
   system("pause");
}
void example(){
   int  var = 20;   /* 实际变量的声明 */
   int  *ip;        /* 指针变量的声明 */
 
   ip = &var;  /* 在指针变量中存储 var 的地址 */
 
   printf("var address: %p\n", &var  );
 
   /* 在指针变量中存储的地址 */
   printf("ip var address: %p\n", ip );
 
   /* 使用指针访问值 */
   printf("*ip number: %d\n", *ip );
}
//计算字符串长度[1.计数器的方式1; 2.递归的方式2 3.指针的方式3]
int CalculateString(char InputString[]){
   int i=0;
   while(InputString[i]!='\0'){
      i++;
   }
   return i;
}
int CalculateString1(char InputString[]){
    if (InputString[0] == '\0') {
        return 0;
    } else {
        return 1 + CalculateString1(&InputString[1]);
    }
} 
int CalculateString2(char InputString[]){
   int i=0;
   char *prt=InputString;
   while(*prt != '\0'){
      i++;
      prt++;
   }
   return i;
}
int main(int argc, char const *argv[])
{
   int i=0;
   char test[]="hello,world!";
   //i=CalculateString(test);
   //i=CalculateString1(test);
   i=CalculateString2(test);
   printf("%d",i);
   system("pause");
   return 0;
}

