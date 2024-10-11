#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[50],b[50];
int main(int argc, char *argv[]){
	strcpy(a,argv[1]);
	strcpy(b,argv[2]);
	int flag;
	flag=strcmp(a,b);
	if (flag<0)
		printf("%s is bigger than %s\n",b,a);
	else if (flag>0)
                printf("%s is bigger than %s\n",a,b);
	     else // flag=0
		printf("Both are equal\n");
	return 0;	
}	


