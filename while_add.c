#include <stdio.h>
int main(){
	int digit,num,sum=0;
	printf("ENTER A NUMBER : ");
	scanf("%d",&num);
	
	while (num>0) 	{
	digit = num % 10;
	sum+=digit;
	num /=10;
	}
	printf("sum of digits : %d",sum);
	return 0;
	}