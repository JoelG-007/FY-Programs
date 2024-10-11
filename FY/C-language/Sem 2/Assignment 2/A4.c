#include<stdio.h>
#include<string.h>
int isPalindrome(char str[20]){
	char str1[20];
	int i,j;
	for(i=0,j=strlen(str)-1;i<j;i++,j--){
		if(str[i]!=str[j])
			return 0;
	}
	return 1;
}
int main(){
	char str[20];
	int flag;
	printf("Enter a Palindrome - ");
	scanf("%s",str);
	flag=isPalindrome(str);
	if(flag==0)
		printf("Not a palindrome.\n");
	else
		printf("%s is a palindrome.\n",str);
	return 0;
}
