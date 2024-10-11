#include<stdio.h>
#include<stdlib.h>
int i,j;
int main(){
	int *row[10], r,c;
	printf("Enter no. of rows and columns - \n");
	scanf("%d%d",&r,&c);
	printf("Enter a matrix of %dx%d -\n",r,c);
	for(i=0;i<r;i++){
	  row[i]=(int *)malloc(c*(sizeof(int)));
		for(j=0;j<c;j++){
		    scanf("%d",row[i]+j);
		}
	}
	printf("Entered matrix - \n");
	for(i=0;i<r;i++){
                for(j=0;j<c;j++){
                        printf("%d\t",*(row[i]+j));
                }
	printf("\n");
        }
	return 0;
}

