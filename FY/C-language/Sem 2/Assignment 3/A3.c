#include<stdio.h>
#include<string.h>
int i;
char temp;
struct student{
        int rno;
        char name[20];
        float perc;
};
void display(struct student s[100],int n){
	printf("\n\nEntered data - \n");
	for(i=0;i<n;i++){
                printf("%d Name - %s\n",i+1,s[i].name);
                printf("%d Roll Number - %d\n",i+1,s[i].rno);
                printf("%d Percentage - %f\n\n",i+1,s[i].perc);
		printf("----------------------\n");
        }
}
void getdets(struct student s[100],int n){
	for(i=0;i<n;i++){
                printf("Enter Name - ");
                scanf("%s",s[i].name);
                printf("Enter Roll Number - ");
                scanf("%d",&s[i].rno);
		printf("Enter percentage - ");
		scanf("%f",&s[i].perc);
        }
}
void dis_perc(struct student s[100],int n, float search){
        for(i=0;i<n;i++){
		if(s[i].perc >  search){
                	printf("Name - %s\n",s[i].name);
                	printf("Roll Number - %d\n",s[i].rno);
        	        printf("Percentage - %f\n",s[i].perc);
	                printf("----------------------\n");

		}
	}
}
void dis_max(struct student s[100],int n){
	int loc=0;
	float max=0.0;
	for(i=0;i<n;i++){
		if(s[i].perc > max)
			loc=i;	
	}
	printf("Name - %s\n",s[loc].name);
        printf("Roll Number - %d\n",s[loc].rno);
        printf("Percentage - %f",s[loc].perc);
        printf("\n-------------------\n");
}
void searchName(struct student s[100],int n, char search1[30]){
	int loc=0;
	for(i=0;i<n;i++){
                if(strcmp(s[i].name,search1)==0){
                        loc=i;
		}
        }
        printf("Name - %s\n",s[loc].name);
        printf("Roll Number - %d\n",s[loc].rno);
        printf("Percentage - %f",s[loc].perc);
        printf("\n-------------------\n");
}
void searchRoll(struct student s[100],int n, int search){
	int loc=0;
        for(i=0;i<n;i++){
                if(s[i].rno == search){
                        loc=i;
        	}
	}
        printf("Name - %s\n",s[loc].name);
        printf("Roll Number - %d\n",s[loc].rno);
        printf("Percentage - %f",s[loc].perc);
        printf("\n-------------------\n");
}
int main(){
	int choice,d , n,sure, searchR;
	float searchP;
	char searchN[30];
	printf("How many students - ");
        scanf("%d",&n);
        struct student s[n];
        getdets(s,n);
	printf("\n\t1.Display all details\n\t2.Display all students with percentage 'n'\n\t3.Max student details\n\t4.Search by Name\n\t5.Search by roll number\n\t6.Exit\n");
	do{
		printf("\n\tEnter choice - ");
		scanf("%d",&choice);
		switch(choice){
			case 1: display(s,n);
				break;
			case 2: printf("Enter the percentage - ");
				scanf("%f",&searchP);
				dis_perc(s,n,searchP);
				break;
			case 3: dis_max(s,n);
				break;
			case 4: printf("Enter Name to search - ");
				scanf("%s",&searchN);
				searchName(s,n,searchN);
				break;
			case 5: printf("Enter Roll no. -  ");
                                scanf("%d",&searchR);
				searchRoll(s,n,searchR);
				break;
			case 6: break;
			default: printf("Invalid choice");
		}
        }while(choice!=6);
	return 0;
}

