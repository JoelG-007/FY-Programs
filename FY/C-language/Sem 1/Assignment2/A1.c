#include<stdio.h>
int main()
{
	float  area, r, cir;
	printf("Enter radius - ");
	scanf("%f",&r);
	area=3.14*(r*r);
	cir=2*3.14*r;
	printf("Radius - %.2f\nCircumference - %.2f\nArea - %.2f", r, cir, area);
	return 0;
}
