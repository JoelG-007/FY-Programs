#include<stdio.h>
int main()
{
	char x;
	int num;
	float j;
	printf("Enter Character: ");
	scanf("%c",&x);
	printf("Enter Integer Value: ");
        scanf("%d",&num);
	printf("Enter Float Value: ");
        scanf("%f",&j);
	printf("Integer=%d\tFloat=%f\tCharacter=%c",num,j,x);
	return 0;
}
