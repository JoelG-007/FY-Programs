#include<stdio.h>
#include<string.h>
int main(){
	int n=0,i;
	printf("How many cities? - ");
	scanf("%d",&n);
	char cities[n][20];
	for(i=0;i<n;i++){
		printf("City %d - ",i+1);
		scanf("%s",cities[i]);
	}
	printf("Entered cities - ");
	for(i=0;i<n;i++){
                printf("%d - %s\n",i+1,cities[i]);
        }
	return 0;
}

