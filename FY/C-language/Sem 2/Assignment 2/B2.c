#include<stdio.h>
#include<string.h>
int main(){
	int i,n,maxlen=0,maxIndex,curlen;
	printf("How many cities? - ");
	scanf("%d",&n);
	char cities[n][20];
	for(i=0;i<n;i++){
		printf("City %d - ",i+1);
		scanf("%s",cities[i]);
		curlen=strlen(cities[i]);
		if(curlen>maxlen){
			maxlen=curlen;
			maxIndex=i;
		}
	}
	printf("Largest city name - %s\n",cities[maxIndex]);
	return 0;
}
