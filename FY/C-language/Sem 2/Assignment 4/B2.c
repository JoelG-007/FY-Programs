#include<stdio.h>
#include<stdlib.h>
int a,b,sum,avg,max;
int main(int argc, char *argv[]){
	a=atoi(argv[1]);
	b=atoi(argv[2]);
	sum=a+b;
	if(a>b)
		max=a;
	else
		max=b;
	avg=sum/2;
	printf("Sum - %d\nAvg - %d\nMax - %d\n",sum,avg,max); 
	return 0;	
}	

