#include<stdio.h>
#include<string.h>
int i;
union details{
	int numofdepts;
	char storename[30];	
};
struct employee{
	int id;
	char name[20],info[30];
	char key;
	union details d;
};
void getdets(struct employee e[20], int n){
	for(i=0;i<n;i++){
        	printf("Enter Employee Name - ");
        	scanf("%s",e[i].name);
        	printf("Enter Employee ID- ");
        	scanf("%d",&e[i].id);
        	printf("Enter Designation - \n");
		scanf("%c",&e[i].key);
		scanf("%c",&e[i].key);
		if(e[i].key=='M'){
			printf("Manager %s",e[i].name);
			printf("\nEnter number of departments - ");
			scanf("%d",&e[i].d.numofdepts);
		}
		else if(e[i].key=='W'){
			printf("Worker %s",e[i].name);
			printf("\nEnter Department name - ");
			scanf("%s",e[i].d.storename);
		}
		
        }
}
void disdets(struct employee e[20], int n){
        printf("\n\nEntered data --> ");
        for(i=0;i<n;i++){
		printf("\n----------------------------");
                printf("\nEmployee Name - %s",e[i].name);
                printf("\nEmployee ID - %d",e[i].id);
                printf("\nDesignation - ");
                if(e[i].key=='M'){
                        printf("\nManager %s",e[i].name);
                        printf("\nNumber of departments - %d",e[i].d.numofdepts);
		}
                else if(e[i].key=='W'){
                        printf("\nWorker %s",e[i].name);
                        printf("\nEnter Department name - %s\n\n",e[i].d.storename);
                }
        }
}
int main(){
	int n;
	printf("How many employee(s) - ");
	scanf("%d",&n);
        struct employee s[n];
        getdets(s,n);
	disdets(s,n);
        return 0;
}
