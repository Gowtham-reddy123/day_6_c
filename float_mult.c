#include <stdio.h>
int main()
{
float a,b,c,d,sum;
printf("enter the value of a\n");
scanf("%4f",&a);
printf("enter the value of b\n");
scanf("%4f",&b);
printf("enter the value of c\n");
scanf("%4f",&c);
printf("enter the value of d\n");
scanf("%4f",&d);
sum=a+b-c-d;
printf("the operations of 4 numbers: %4f\n",sum);
return 0;
}