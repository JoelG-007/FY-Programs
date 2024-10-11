#include<stdio.h>
int main(){
	int month;
	printf("Enter the month (in integer) - ");
	scanf("%d",&month);
	check(month);
	return 0;
}
int check(int a){
	if(a>=1 && a<=12)
		printf("\nVALID\n");
	else
		printf("\nMonth does not exist. - INVALID\n");
	return 0;
}

