#include<stdio.h>
#include<ctype.h>
#define PI 3.142
#define CIRCLEAREA(r) (PI*r*r)
int main(){
	float r;
	printf("Enter the radius in cm - ");
	scanf("%f",&r);
	printf("The area of circle is = %.2f\n",CIRCLEAREA(r));
   	return 0;
}
