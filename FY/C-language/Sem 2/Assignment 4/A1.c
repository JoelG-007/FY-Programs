#include<stdio.h>
void swap(int *ptx ,int *pty){
	int temp;
	temp=*ptx;
	*ptx=*pty;
	*pty=temp;
}
int main(){
	int x=10, y=20;
	printf("Before swaping - x=%d,y=%d",x,y);
	swap(&x,&y);
	printf("\nAfter swaping - x=%d, y=%d\n",x,y);
	return 0;
}
	
