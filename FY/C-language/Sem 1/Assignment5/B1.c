#include<stdio.h>
int main(){
	char disp(char c);
	char ch;
	printf("Enter starting character - ");
	scanf("%c",&ch);
	disp(ch);
}
char disp(char a){
	int i,lim;
	printf("Enter limit - ");
	scanf("%d",&lim);
	for(i=1;i<=lim;i++,a++){
		printf("%c\t",a);
	}
	return 0;
}
