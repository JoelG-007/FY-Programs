#include<stdio.h>
int main()
{
	int a, b, temp;
	printf("Enter two numbers - ");
	scanf("%d%d",&a,&b);
	printf("Before swapping - \nA = %d\nB = %d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping - \nA = %d\nB = %d",a,b);
	return 0;
}
