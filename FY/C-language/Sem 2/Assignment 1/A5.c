#include<stdio.h>
void accept(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		scanf("%d",&arr[i]);
	}
}
int search(int arr[10], int lim, int c){
	int i; 
	for(i=0;i<lim;i++){
	if(c==arr[i])
		return i;
	}
	return -1;
}	
void display(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int a[10], count, find, temp;
	printf("Enter range - \n");
	scanf("%d",&count);
	printf("Enter %d numbers - \n",count);
	accept(a,count);
	printf("Enter a number to find - \n");
	scanf("%d",&find);
	temp=search(a,count,find);
	printf("Entered array -\n");
	display(a,count);
	if(temp==-1){
		printf("\nNumber not found.");
	}	
	else
		printf("\nNumber found at location - %d\n",temp+1);
	return 0;
}

