#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	printf("Odd numbers%d\n",n);
	for(i=1;i<=n;i+=2)
	{
			printf("%d,",i);
	}
	return 0;
}
