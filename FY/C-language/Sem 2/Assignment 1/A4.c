#include<stdio.h>
void accept(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		scanf("%d",&arr[i]);
	}
}
int occur(int arr[10], int lim, int c){
	int i, sum=0;
	for(i=0;i<lim;i++){
	if(c==arr[i])
		sum++;
	}
	return sum;
}	
void display(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int a[10], count, search, temp;
	printf("Enter range - \n");
	scanf("%d",&count);
	printf("Enter %d numbers - \n",count);
	accept(a,count);
	printf("Enter a number to find its occurance - \n");
	scanf("%d",&search);
	temp=occur(a,count,search);
	printf("Entered array -\n");
	display(a,count);
	printf("\nOccurance of %d = %d times",search,temp);
	return 0;
}
