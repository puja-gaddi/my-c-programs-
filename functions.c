#include<stdio.h>
int swap(int *a,int b)
{
	*a=*a+10;
	b=b+10;
	return b;
}
int main()
{
	int a,b;
	printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    b=swap(&a,b);
    printf("a=%d,b=%d",a,b);
    return 0;
}
