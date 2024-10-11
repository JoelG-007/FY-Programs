#include<stdio.h>
#include<string.h>
#include<ctype.h>
char arr1[20], arr2[20];
int i,j,flag,temp;
int main(){
	int choice;
	printf("Choose the following function(s)-\n\t1.Length\n\t2.Copy\n\t3.Concatenate\n\t4.Compare\n\t5.Uppercase\n\t6.Lowercase\n\t7.Reverse\n\t8.Exit\n\n");
	do{
		printf("\tEnter You choice - ");
		scanf("%d",&choice);
		switch(choice){
			case 1:printf("Enter a string - ");
			       scanf("%s",arr1);
			       printf("Length of entered string - %d\n",strlen(arr1));
			       break;
			case 2:printf("Enter a string - ");
                               scanf("%s",arr1);
			       printf("Entered string - %s\nCopied string - %s\n",arr1,strcpy(arr2,arr1));
			       break;
			case 3:printf("Enter 1st string - ");
                               scanf("%s",arr1);
			       printf("Enter 2nd string - ");
                               scanf("%s",arr2);
			       printf("Concatenated string - %s\n",strcat(arr1,arr2));
			       break;
			case 4:printf("Enter 1st string - \n");
			       scanf("%s",arr1);
			       printf("Enter 2nd string - \n");
        		       scanf("%s",arr2);
			       flag= strcmp(arr1,arr2);
			       if (flag<0)
					printf("%s is bigger tham %s\n",arr2,arr1);
			       else if (flag>0)
                			printf("%s is bigger tham %s\n",arr1,arr2);
	     		       	    else // flag=0
						printf("Both are equal\n");
			       break;
			case 5:printf("Enter a string - ");
                               scanf("%s",arr1);
			       printf("Entered string - %s\n",arr1);
			       for(i=0;arr1[i]!='\0';i++){
					if(islower(arr1[i]))
						printf("%c",arr1[i]-32);
                                        else
                                                printf("%c",arr1[i]);
			       }
			       printf("\n");
			       break;
			case 6:printf("Enter a string - ");
                               scanf("%s",arr1);
                               printf("Entered string - %s\n",arr1);
                               for(i=0;arr1[i]!='\0';i++){
                                        if(isupper(arr1[i]))
						printf("%c",arr1[i]+32);
					else
						printf("%c",arr1[i]);
			       }
			       printf("\n");
			       break;
			case 7:printf("Enter a string - ");
			       scanf("%s",arr1);
			       i=strlen(arr1);
			       for(j=0;j<=strlen(arr1);j++,i--){
					arr2[j]=arr1[i];
			       }	
			       printf("Reveresed string - %s",arr2);
			       break;
		 	}
	}while(choice!=8);
	return 0;
}
