#include<stdio.h>
int main()
{
	int a,b,c; float d;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("sum=%d",c);
	c=a-b;
	printf(" \n difference=%d",c);
	c=a*b;
	printf("\n product=%d",c);
	d=(float)a/b;
	printf("\n division=%f",d);
	return 0;
}