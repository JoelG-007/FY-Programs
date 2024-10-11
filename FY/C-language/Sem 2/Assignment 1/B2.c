#include<stdio.h>
void accept(int arr[10][10], int r, int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	} 
}
void add(int arr1[10][10], int arr2[10][10], int arr3[10][10],int r,int c){
	int i,j;
        for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                        arr3[i][j]=arr1[i][j]+arr2[i][j];
                }
        } 

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
	int a[10][10], b[10][10],c[10][10],m,n;
	printf("Enter no. of rows and columns - \n");
	scanf("%d%d",&m,&n);
	printf("Enter a matrix 'a' of %dx%d -\n",m,n);
	accept(a,m,n);
	printf("Enter a matrix 'b' of %dx%d -\n",m,n);
        accept(b,m,n);
	add(a,b,c,m,n);
	printf("Matrix A - \n");
	display(a,m,n);
	printf("Matrix B - \n");
        display(b,m,n);
	printf("Matrix C - \n");
        display(c,m,n);

	return 0;
}
