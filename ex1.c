#include<stdio.h>
#include<stdlib.h>

void chngval(int);

int main (){
	int x = 10;
	printf("The value of x is %d\n",x);
	chngval(x);
	printf("The value of x is %d\n",x);
	return 0;
}
void chngval(int x)
{
	x = 15;
//	return 0;
}
