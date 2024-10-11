#include<stdio.h>
int main(){
    	int n;
    	FILE *fp1,*fp2,*fp3;
    	fp1=fopen("numbers.txt","r");
    	fp2=fopen("even.txt","w");
	fp3=fopen("odd.txt","w");
    	if((fp1==NULL)||(fp2==NULL)||(fp3==NULL))
      		printf("ERROR 00\n");
    	else{
        	while(!feof(fp1)){
          		fscanf(fp1,"%d",&n);
          		if(n%2==0)
          			fprintf(fp2,"%d\n",n);
          		else
          			fprintf(fp3,"%d\n",n);
         	}
     	fclose(fp1);
     	fclose(fp2);
     	fclose(fp3);
     	}
     	return 0;
}
