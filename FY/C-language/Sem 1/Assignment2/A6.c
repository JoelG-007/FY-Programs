#include<stdio.h>
int main()
{
	float cm, feet, in;
	printf("Enter cm(s) - ");
	scanf("%f", &cm);
	feet = cm/30.48;
	in = cm/2.54;
	printf("Centimeter - %.2f\nInches - %2.f\nFeet - %.2f",cm, in, feet);
	return 0;
}
