#include<stdio.h>
int main(){    //swap of two numbers...
int a=5 ,b=10;
printf("before swap : \n%d \n%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("after swap : \n%d \n%d",a ,b);
}
