# include<stdio.h>
int main()
{
	int a,b,c;
	printf("entre a :");
	scanf("%d",&a);
	printf("entre b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a: %d, b: %d\n ",a,b);
}
