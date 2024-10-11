#include<stdio.h>
void accept(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		scanf("%d",&arr[i]);
	}
}
void display(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int a[10], count;
	printf("Enter range - \n");
	scanf("%d",&count);
	printf("Enter %d numbers - \n",count);
	accept(a,count);
	printf("Entered array -\n");
	display(a,count);
	return 0;
}
