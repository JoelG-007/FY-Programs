#include<stdio.h>
void accept(int arr[10][10], int r, int c){
	int i,j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
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
	int a[10][10], m,n;
	printf("Enter no. of rows and columns - \n");
	scanf("%d%d",&m,&n);
	printf("Enter a matrix of %dx%d -\n",m,n);
	accept(a,m,n);
	printf("Entered matrix - \n");
	display(a,m,n);
	return 0;
}

