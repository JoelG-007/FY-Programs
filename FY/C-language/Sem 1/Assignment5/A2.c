#include<stdio.h>
int main(){
	int num, sum;
	printf("Enter a number - ");
	scanf("%d",&num);
	sum=sod(num);
	printf("%d=%d\n",num,sum);
	return 0;
}
int sod(int n){
	int res, temp;
	while(n>0){
		temp=n%10;
		res=res+temp;
		n=n/10;
	}
	return(res);
}


