//
//                              Tail Recursion.
//A recursion function is called tail recursion if recursive function is last thing done by function .
//there is no need to record of previous state.   


#include<stdio.h>
void fun(int n)
{
	if(n>=0)
	{
		printf("%d",n);
		fun(n-1);
	}
	
}
    int main()
    {
    	int x=3;
    	fun(x);
	}
