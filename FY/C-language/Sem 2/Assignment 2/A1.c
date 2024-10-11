#include<stdio.h>
#include<string.h>
int main(){
	char a[20], b[20];
	int flag;
	printf("Enter string a - \n");
	scanf("%s",a);
	printf("Enter string b - \n");
        scanf("%s",b);
	flag= strcmp(a,b);
	if (flag<0)
		printf("%s is bigger tham %s\n",b,a);
	else if (flag>0)
                printf("%s is bigger tham %s\n",a,b);
	     else // flag=0
		printf("Both are equal\n");
	return 0;	
}
