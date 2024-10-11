#include<stdio.h>
int i,j;
float sum;
struct birthday{
	int d,m,y;
};
struct student{
	int rno;
	char name[20];
	float perc;
	struct birthday b;
	float marks[6];
};
void sort_n_display(struct student s[20],int n){
	struct student temp;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(s[j].perc<s[j+1].perc){
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
			}
		}
	}
}
void display(struct student s[100],int n){
	printf("\n\nEntered data - \n");
	for(i=0;i<n;i++){
                printf("%d Name - %s\n",i+1,s[i].name);
                printf("%d Roll Number - %d\n",i+1,s[i].rno);
                printf("%d Percentage - %f\n\n",i+1,s[i].perc);
		printf("%d DOB - %d.%d.%d\n",i+1,s[i].b.d,s[i].b.m,s[i].b.y);
		printf("----------------------\n");
        }
}
void getdets(struct student s[100],int n){
	for(i=0;i<n;i++){
                printf("Enter Name - ");
                scanf("%s",s[i].name);
                printf("Enter Roll Number - ");
                scanf("%d",&s[i].rno);
                printf("Enter birthday - ");
		printf("\tDate - ");
		scanf("%d",&s[i].b.d);
       		printf("\tMonth - ");
                scanf("%d",&s[i].b.m);
		printf("\tYear - ");
                scanf("%d",&s[i].b.y);
		printf("Enter marks of 6 subjects (out of 100)- ");
		for(j=0;j<6;j++){
			printf("\nSubject %d - ",j+1);
			scanf("%f",&s[i].marks[j]);
			sum=sum+s[i].marks[j];
		}
		s[i].perc=(sum/600)*100;
		
	 }
}
int main(){
	int n;
	printf("How many students - ");
	scanf("%d",&n);
        struct student s[n];
        getdets(s,n);
	printf("Before Sorting - ");
	display(s,n);	
	sort_n_display(s,n);
	printf("After Sorting - ");	
	display(s,n);
	return 0;
}
