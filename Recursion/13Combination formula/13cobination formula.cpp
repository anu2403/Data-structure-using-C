// How to write code for Combination formula nCr= n!/r!(n-r)! with the help of Recursion . 
#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	return fact(n-1)*n;
}
int nCr(int n,int r)
{
	int numerator,denamenator;
	numerator=fact(n);
	denamenator=fact(r)*fact(n-r);
	return numerator/	denamenator;
	
}
int main()
{
	printf("%d",nCr(4,2));
	return 0;
}

