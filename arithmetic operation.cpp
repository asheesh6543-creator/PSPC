#include<stdio.h>
int main()
{
	int a,b, sum, subs, mult, mod;
	float div;
	printf("Enter two values to perform arithmetic operation\n");
	scanf("%d %d",&a,&b);

	sum=a+b;
	subs=a-b;
	mult=a*b;
	mod=a%b;
	div=float(a/b);
	printf("sum=%d\nsub=%d\nmult=%d\nmod=%d\ndiv=%f\n",sum,subs,mult,mod,div);
}
