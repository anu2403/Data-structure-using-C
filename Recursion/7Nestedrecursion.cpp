//-> In nested recursion the recursive function pass as a parameter.
//-> It is called as recursion inside recursion .

#include<stdio.h>
int fun(int n){
	if(n>100)
	return n-10;
	return fun(fun(n+11));
	
}
int main()
{
	int r;
	r=fun(95);
	printf("%d",r);
	return 0;
}
