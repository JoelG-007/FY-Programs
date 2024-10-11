#include<stdio.h>
int main(){
	int digit,sum;
	printf("Enter a number - ");
	scanf("%d",&digit);
	while(digit!=0){
		sum+=digit%10;
		digit=digit/10;
	}
	printf("Sum = %d\n",sum);
	return 0;
}
