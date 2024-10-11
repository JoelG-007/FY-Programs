#include<stdio.h>
int main()
{
	float cel, fahr;
	printf("Enter celsius - ");
	scanf("%f", &cel);
	fahr = 1.8*cel+32;
	printf("After converting - %fF",fahr);
	return 0;
}
