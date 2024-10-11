#include<stdio.h>
int main(int argc,char *argv[]){
	FILE *fp1,*fp2;
   	char ch;
   	if(argc!=3)
     		printf("\n INSUFFICIENT RECORD");
   	else{
      		fp1=fopen(argv[1],"r");
      		fp2=fopen(argv[2],"w");
     		
		if((fp1==NULL)||(fp2==NULL))
       			printf("ERROR IN OPENING FILE");
     		else{
        		while(!feof(fp1)){
        		ch=fgetc(fp1);
        		fputc(ch,fp2);
        		}
     		fcloseall();
      		}
  	}
	return 0;
}
