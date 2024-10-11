#include<stdio.h>
#include<string.h>
int i;
struct student{
        int rno;
        char name[20];
        float perc;
};
void display(struct student s[100],int n){
	for(i=0;i<n;i++){
                printf("%d Name - %s\n",i+1,s[i].name);
                printf("%d Roll Number - %d\n",i+1,s[i].rno);
                printf("%d Percentage - %f\n\n",i+1,s[i].perc);
		printf("----------------------");
        }
}
void getdets(struct student s[100],int n){
	printf("\n\nEntered data - \n");
	for(i=0;i<n;i++){
                printf("Enter Name - ");
                scanf("%s",s[i].name);
                printf("Enter Roll Number - ");
                scanf("%d",&s[i].rno);
                printf("Enter Percentage - \n");
                scanf("%f",&s[i].perc);
        }
}
int main(){
	int n;
	printf("How many students - ");
	scanf("%d",&n);
        struct student s[n];
        getdets(s,n);
	display(s,n);
        return 0;
}
