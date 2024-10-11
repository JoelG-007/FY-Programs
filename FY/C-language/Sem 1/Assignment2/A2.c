#include<stdio.h>
int main()
{
	char ch, prev, next;
	printf("Enter a character - ");
	scanf("%c",&ch);
	prev = ch - 1;
	next = ch+1;
	printf("Entered character - %c\nPrevious character - %c\nNext character - %c",ch ,prev, next);
	return 0;
}
