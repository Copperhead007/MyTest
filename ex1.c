#include<stdio.h>
#include<stdlib.h>
//function takes address of variable
void chngval(int*);
//False function change
//void chngval(int);
int main (){
	int x = 10;
	printf("The value of x is %d\n",x);
	printf("The address of x outside of the function is %p\n",(void*)&x);
	chngval(&x);
	//chngval(x);
	printf("The value of x after function is %d\n",x);
	return 0;
}
void chngval(int * p)
{
	*p = 15;
	printf("The address of x inside of the function is %p\n",(void*)p);
	printf("The above address has the same address as x because we passed the address of x in \n &x = *p dereferenced and printed address of where p points\n");
//	return 0;
}
