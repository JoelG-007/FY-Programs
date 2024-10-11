#include<stdio.h>
void bubble_sort(int arr[10], int lim){
	int i,j,temp;
	for(i=0;i<lim;i++){
		for(j=0;j<lim-i-1;j++){
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
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
	bubble_sort(a,count);
	printf("After sorting -\n");
        display(a,count);
	return 0;
}
