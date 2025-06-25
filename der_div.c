#include <stdio.h>				//1

int main() {					//2
    int dividend, divisor, count = 0;		//3

    printf("Enter dividend: ");			//4
    scanf("%d", &dividend);			//5

    printf("Enter divisor: ");			//6
    scanf("%d", &divisor);			//7

    while (dividend >= divisor) {		//8
        dividend = dividend - divisor;		//9
        count++;				//10
    }

    printf("Quotient = %d\n", count);		//11
    printf("Remainder = %d\n", dividend);	//12

    return 0;					//13
}		
