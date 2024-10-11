#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second  number: ");
        scanf("%d",&num2);
	printf("Sum of numbers - %d",num1+num2);
	printf("\nDifference of numbers - %d",num1-num2);
	printf("\nProduct of numbers - %d",num1*num2);
	printf("\nQuotient - %d",num1/num2);
	printf("\nRemainder - %d",num1%num2);
	return 0; 
}
