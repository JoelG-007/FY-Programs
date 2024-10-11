#include<stdio.h>
int main()
{
	int s, sec, min, hour;
	printf("Enter hour(s) - ");
	scanf("%d",&hour);
	printf("Enter minutes(s) - ");
	scanf("%d",&min);
	printf("Enter second(s) - ");
	scanf("%d",&sec);
	s=(hour*3600+min*60+sec*1);
	printf("Converting %d:%d:%d = %d second(s) - ",hour, min, sec, s); 
	return 0;
}
