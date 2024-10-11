#include<stdio.h>
#include<stdlib.h>
int i;
int main(){
        int n,sum;
	float avg;
	printf("How many integers? - ");
	scanf("%d",&n);
	int *arr=(int *)malloc(n*sizeof(int));
	printf("Enter %d numbers -  \n",n);
	for(i=0;i<n;i++){
		printf("%d - ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
		sum+=arr[i];
	}
	avg=((float)sum/i);
	
	printf("\nSum = %d Average = %d\n",sum,avg);
	free(arr);
	return 0;
}

