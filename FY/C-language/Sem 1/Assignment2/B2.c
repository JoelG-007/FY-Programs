#include<stdio.h>
int main()
{
	int deno, count;
	printf("Enter Amount - ");
	scanf("%d",&deno);
	count = deno/100;	//100
	if(count>0){
		printf("100 x %d\n",count);
	}
	deno%=100;		

	count = deno/50;        //50
	if(count>0){
                printf("50 x %d\n",count);
        }
        deno%=50;

	count = deno/20;        //20
	if(count>0){
                printf("20 x %d\n",count);
        }
        deno%=20;

	count = deno/10;        //10
	if(count>0){
                printf("10 x %d\n",count);
        }
        deno%=10;

	count = deno/5;        //5
	if(count>0){
                printf("5 x %d\n",count);
        }
        deno%=5;

	count = deno/1;       //1
	if(count>0){
                printf("1 x %d\n",count);
        }
        deno%=1;
	return 0;
}
