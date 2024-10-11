#include<stdio.h> 
typedef struct{
	int rno;
       	char name[20];
       	float perc;
}student;  
int main(){
   	int n;
   	char ch;
   	student s,temp;
   	FILE *fp;
   	temp.perc=0;
   	fp=fopen("student.txt","r");
   	if(fp==NULL)
    		printf("ERROR 00");
   	else{
      		while(!feof(fp)){
       			fscanf(fp,"%d%s%f",&s.rno,s.name,&s.perc);
       			printf("\n%d\t%s\t%f",s.rno,s.name,s.perc);
       			if(s.perc>temp.perc){
          			temp.perc=s.perc;
           			temp=s;
         		}
     		}
     	}
    	fclose(fp);
    	printf("\nHighest percentage - %s\n",temp);
     	printf("\nStudent with the highest percentage %d\t%s\t%f\n",temp.rno,temp.name,temp.perc);
    	return 0;
}
   
   
