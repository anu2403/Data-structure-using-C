//Combination formula nCr=n!/r!(n-r)! with help of Pascal triangle to avoid excessive call.
#include<stdio.h>
int NCR(int n,int r)
{
	if(n==r||r==0)
	return 1;
	return NCR(n-1,r-1)+NCR(n-1,r);
}
int main()
{
	printf("%d",NCR(4,2));
	return 0;
}
