#include<stdio.h>
int main(){
	int num, n;
	printf("Enter a number - ");
	scanf("%d",&n);
	for(num=2;num<=n-1;num++)
	{
		if(n%num==0)
		break;
	}
	if(num==n)
		printf("Prime\n");
	else
		printf("Not PRIME\n");
	return 0;
}
