#include<stdio.h>
int main(){
	int n,num;
	for(n=10;n<=100;n++){
		for(num=2;num<=n-1;num++)
			if(n%num==0)
				break;
			if(num==n)
				printf("%d\t",n);

	}
	return 0;
				
}
