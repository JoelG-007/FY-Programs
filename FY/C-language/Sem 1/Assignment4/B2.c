#include<stdio.h>
int main(){
	int op, a, b;
	printf("1.Add\n2.Subtract\n3.Multiplication\n4.Divide\n5.Exit");
	do{
	printf("\n\tEnter operation - ");
	scanf("%d",&op);
		switch(op){
			case 1:printf("\nEnter two numbers - ");
		       		scanf("%d %d",&a,&b);
		       		printf("\n%d + %d = %d",a,b,a+b);
				break;
			case 2:printf("\nEnter two numbers - ");
                       		scanf("%d %d",&a,&b);
                       		printf("\n%d - %d = %d",a,b,a-b);
				break;
			case 3:printf("\nEnter two numbers - ");
                       		scanf("%d %d",&a,&b);
                       		printf("\n%d * %d = %d",a,b,a*b);
				break;
			case 4:printf("\nEnter two numbers - ");
                       		scanf("%d %d",&a,&b);
                       		printf("\n%d / %d = %d",a,b,a/b);
				break;
			default:printf("Error: Invalid input");break;
		}
	}while(op!=5);
	return 0;
}

