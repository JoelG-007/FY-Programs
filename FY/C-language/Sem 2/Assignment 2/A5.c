#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char sentence[100];
	int i,j;
	printf("Enter a sentence - ");
	scanf("%s",sentence);
	j=strlen(sentence);
	for(i=0;i<j;i++){
		if(sentence[i]==' ')
			sentence[i]='*';
		else if(isalpha(sentence[i])){
			if(isupper(sentence[i]))
				sentence[i]=sentence[i]+32;
			else if(islower(sentence[i]))
					sentence[i]=sentence[i]-32;
		}
		else if(isdigit(sentence[i]))
			sentence[i]='?';
	}
	printf("\nAltered array - %s\n",sentence);
	return 0;
}

