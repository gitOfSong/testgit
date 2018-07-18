#include<stdio.h>
int main(void)
{
	int i = 0;
	int x = 0;
	char a = "s";
	for(i=0;i<5;i++)
	{
		x += i;
		printf("x=%d\n",x);
		printf("a=%d\n",a);
	}
}
