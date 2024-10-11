#include<stdio.h>
int cc=0,lc=0,wc=0,flag=0;
int main(int argc,char *argv[]){
  	FILE *fp;
  	char ch;
  	fp=fopen(argv[1],"r");
  	if (fp==NULL)
   		printf("Error in opening file\n");
  	else
   	while(!feof(fp)){
 		ch=fgetc(fp);
       		cc++;
      		if(ch=='\n')
         		lc++;
      			switch(ch){
      				case '.':
      				case ',':
      				case ' ':
      				case '\n':
      				case '\t':
      				case '-':
      				if(flag==1)
       					wc++;
      					flag==0;
      					break;
     				default:flag=1;
     			}
     		}
      	fclose(fp);
     	printf("\nCount of characters -  %d",cc);
     	printf("\nCount of lines - %d",lc);
      	printf("\nWord count - %d\n",wc);
	return 0;
}
  
