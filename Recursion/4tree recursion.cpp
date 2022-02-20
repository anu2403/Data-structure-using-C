
//-> A function which recursive function , it is calling itself only one time then  it is a linear recursion .
//-> A recursive function which is calling itself more than one times , then it is tree recursion . 

#include<stdio.h>
void fun(int n)
{
	if(n>0)
	{
	  printf("%d",n);
	  fun(n-1);
	  fun(n-1);
	  
	  }
	  
}
int main()
{
	fun(3);
	return 0;
}
