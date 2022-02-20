
                      Head Recursion
  ->The function does'nt have to process or perform any operation at the time of calling.
  -> It has to do everything only at the time of returning .


#include<stdio.h>
void fun(int n)
{
	if(n>0)
	{
		fun(n-1);
		printf("%d",n);

	}
	
}
    int main()
    {
    	int x=3; 
	}
