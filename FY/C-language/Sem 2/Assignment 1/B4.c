#include<stdio.h>
void accept(int arr[10][10], int r, int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	} 
}
int trace(int arr1[10][10],int r){
	int i, sum=0;
        for(i=0;i<r;i++){
                sum=sum+arr1[i][i];
        } 
	return sum;
}
void display(int arr[10][10], int r, int c){
	int i,j;
	for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                        printf("%d\t",arr[i][j]);
                }
	printf("\n");
        }
}
int main(){
	int a[10][10], m, n, ans;
	printf("Enter no. of rows and columns - \n");
	scanf("%d%d",&m,&n);
	printf("Enter a matrix 'a' of %dx%d -\n",m,n);
	accept(a,m,n);
	ans=trace(a,m);
	printf("Matrix A - \n");
	display(a,m,n);
	printf("Trace of matrix  A - %d",ans);
	return 0;
}

