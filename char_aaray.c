#include <stdio.h>		//1
int main()			//2
{				//3
char ch[12];			//4
printf("enter your name	:");
scanf("%17s",&ch);
printf("your name 	: %13s",ch);
return 0;
}