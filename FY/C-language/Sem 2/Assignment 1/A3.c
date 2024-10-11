#include<stdio.h>
void accept(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		scanf("%d",&arr[i]);
	}
}
void sum(int arr1[10], int arr2[10], int arr3[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
}
void display(int arr[10], int lim){
	int i;
	for(i=0;i<lim;i++){
		printf("%d\t",arr[i]);
	}
}
int main(){
	int a[10], b[10], c[10], count;
	printf("Enter range - \n");
	scanf("%d",&count);
	printf("Enter %d numbers for 'a' - \n",count);
	accept(a,count);
	printf("Enter %d numbers for 'b' - \n",count);
        accept(b,count);
	sum(a,b,c,count);
	printf("Array 'a'-\n");
	display(a,count);
	printf("\nArray 'b'-\n");
        display(b,count);
	printf("\nArray 'c'-\n");
        display(c,count);
	return 0;
}
