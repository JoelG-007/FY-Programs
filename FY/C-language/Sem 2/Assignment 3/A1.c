#include<stdio.h>
#include<string.h>
struct student{
	int rno;
	char name[20];
	float perc;
};
int main(){
	struct student s;
	int i;
	for(i=0;i<3;i++){
		printf("Enter Name - ");
		scanf("%s",s.name);
		printf("Enter Roll Number - ");
                scanf("%d",&s.rno);
		printf("Enter Percentage - ");
                scanf("%f",&s.perc);
	}
	for(i=0;i<3;i++){
                printf("%d Name - %s\n",i+1,s.name);
                printf("%d Roll Number - %d\n",i+1,s.rno);
                printf("%d Percentage - %f\n\n",i+1,s.perc);
        }
	return 0;
}
