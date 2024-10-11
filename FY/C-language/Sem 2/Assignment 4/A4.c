#include<stdio.h>
#include<stdlib.h>
int i;
int main(int argc, char *argv[]){
	printf("There are %d arguement(s) - ",argc);
	for(i=0;i<argc;i++)
		printf("\n%s",argv[i]);
	printf("\n");
	return 0;	
}	
