#include<stdio.h>
int main(){
	int lim, even_count;
	printf("Enter limit - ");
	scanf("%d",&lim);
	even_count=isEven(lim);
	printf("Count of -\nEven = %d\nOdd = %d\n",even_count,lim-even_count);
	return 0;	
}
int isEven(int c){
	int check,i,count=0;
	for(i=1;i<=c;i++){	
		printf("Enter number %d - ",i);
		scanf("%d",&check);
		if(check%2==0)
			count++;
		else
			break;
	}
	return(count);
}
