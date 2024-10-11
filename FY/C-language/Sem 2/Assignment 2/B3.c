#include<stdio.h>
#include<string.h>
int main(){
	int n,i, loc=-1,flag;
	printf("How many country(ies)? - ");
	scanf("%d",&n);
	char country[n][20];
	char capi[n][20], search[20];
	for(i=0;i<n;i++){
		printf("Enter Country %d - ",i+1);
		scanf("%s",country[i]);
		printf("Enter Capital of %s - ",country[i]);
                scanf("%s",capi[i]);
	}
	printf("Enter which Country's capital to find -  ");
	scanf("%s",search);
	for(i=0;i<n;i++){
		flag=strcmp(country[i],search);
		if(flag==0)
			printf("Capital of %s is %s",search,capi[i]);
		break;
	}
	return 0;
}

