#include<stdio.h>
int main()
{
	int h, m, s, sec;
	printf("Enter second(s) - ");
	scanf("%d",&sec);
	h=sec/3600;
	m=(sec%3600)/60;
	s=m%60;
	printf("Converting %d - %d:%d:%d",sec, h, m, s);
	return 0;
}
