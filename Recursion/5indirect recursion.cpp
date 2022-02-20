//-> Indirect recursion is type of recursion when recursive functions are more than one time and depends on each other. We can say that , the recursive function perform in circular motion . 




#include<stdio.h>

void funA(int n)
void funB(int n)
{
	if(n>0)
	{
		printf("%d",n);
		funB(n-1);
	}
}
void funB(int n)
{
	if(n>1)
	{
	printf("%d",n);
	funA(n/2);
	}

}
int main()
{
	funA(20);
	return 0;
}
