#include<stdio.h>
#include<string.h>
int countOccurance(char str[20], char ch){
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]==ch)
			return i;
	}
	return -1;
}
int main(){
	char str1[20],ch;
	int posi;
	printf("Enter a string - ");
	scanf("%s",str1);
	printf("Enter a character to search - ");
	scanf("%c",&ch);
	scanf("%c",&ch);
	posi=countOccurance(str1,ch);
	if(posi!=-1)
		printf("%c found at %d\n",ch,posi);
	else
		printf("%c not found in %s\n",ch,str1);
	return 0;
}

	
