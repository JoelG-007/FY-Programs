#include<stdio.h>
int i;
void count(int tarr[10], int limit, int *even, int *odd){
	*even=*odd=0;
	for(i=0;i<limit;i++){
		if(tarr[i]%2==0)
			(*even)++;
		else
			(*odd)++;
	}
	
}	
int main(){
	int arr[10],n,even,odd;
	printf("How many integers? - ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\n%d. - ",i+1);
		scanf("%d",&arr[i]);
	}
	count(arr,n,&even,&odd);
	printf("\nEven count - %d, Odd count - %d\n",even,odd);
	return 0;
}	
