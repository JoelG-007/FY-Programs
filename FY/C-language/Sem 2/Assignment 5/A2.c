#include<stdio.h>
#include"mymacros.h"
int choice, x, y, z;
int main (){
	do{
   		printf("\n\tOperations - ");
   		printf("\n\t1.SQUARE");
   		printf("\n\t2.CUBE");
   		printf("\n\t3.MAXIMUM OF TWO");
   		printf("\n\t4.MAXIMUM OF THREE");
   		printf("\n\t5.Exit");
 	 	printf("\nEnter The choice\n");
   		scanf("%d",&choice);
   		switch(choice){ 
    			case 1:	printf("Enter a number - \n");
           			scanf("%d",&x);
           			printf("Square of %d is %d\n",x,SQR(x));
           			break;
   			case 2:	printf("Enter a number - \n");
           			scanf("%d",&x);
           			printf("Cube of %d is %d\n",x,CUBE(x));
           			break;
   			case 3:	printf("Enter 2 number - \n");
          			scanf("%d%d",&x,&y);
          			printf("Max =  %d & %d is %d\n",x,y,MAX2(x,y));
          			break;
  			case 4:	printf("Enter 3 number - \n");
          			scanf("%d%d%d",&x,&y,&z);
          			printf("Max = %d",MAX3(x,y,z)));
          			break;
  				case 5:printf("\n Exiting\n");
         			break;
 			default:printf("INVALID CHOICE\n");
		}
	}while(choice!=5);
 return 0;
}   
