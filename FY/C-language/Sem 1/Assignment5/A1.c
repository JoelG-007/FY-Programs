#include<stdio.h>
int main(){
	int lim,res;
	printf("Enter a number - ");
	scanf("%d", &lim);
	res=fact(lim);
	printf("=%d\n",res);
	return 0;
}
int fact(int a){
	int fact=1, temp=1, i;
	for(i=1;i<=a;i++){
		fact=fact*temp;
		temp++;
		printf("%d*",i);
	}
	return(fact);
}
