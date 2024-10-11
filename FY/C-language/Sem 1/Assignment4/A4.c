#include<stdio.h>
int main(){
	int lim, i, num, even=0,odd=0;
	printf("Enter limit - ");
	scanf("%d",&lim);
	for(i=1;i<=lim;i++)
	{
		printf("Number %d - ",i);
		scanf("%d",&num);
		if(num%2==0){
			even+=1;
		}
		else{
			odd+=1;
		}
	}
	printf("\nNumber of Odd numbers = %d\n\tEven numbers = %d\n",odd,even);
	return 0;
}
