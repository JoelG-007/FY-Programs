#include<stdio.h>
int main()
{
	float bsal, hra, da, ptax, netsal;
	printf("Enter Basic salary - ");
	scanf("%f",&bsal);
	hra=0.42*bsal;
	da=0.10*bsal;
	ptax=0.05*bsal;
	netsal=bsal+hra+da-ptax;
	printf("Net Salary of the Employee - %.2f",netsal);
	return 0;
}
