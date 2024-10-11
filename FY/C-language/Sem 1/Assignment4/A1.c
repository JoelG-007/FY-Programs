#include<stdio.h>
int main(){
	int i, n, sum, avg;
	printf("Enter limit - ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		sum=sum+i;
	}
	avg = sum/n;
	printf("Sum = %d\nAverage = %d\n",sum,avg);
}
