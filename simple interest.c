#include<stdio.h>
int main()
{
	float P,R,T,A,I;
	printf("enter the principle amount,rate of interest,time in years:");
	scanf("%f %f %f",&P,&R,&T);
	I=(P*R*T)/100;
	printf("simple interest =%f",I);
	A=P+I;
	printf("\n total amount=%f",A);
	return 0;
}