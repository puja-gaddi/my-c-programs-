#include<stdio.h>
#include<math.h>
int main()
{
	float P,R,T,A,CI;
	printf("enter the principle amount,rate of interest,time in years:");
	scanf("%f %f %f",&P,&R,&T);
	A=P*pow((1+R/100),T);
	printf("total amount =%f",A);
	CI=A-P;
	printf("\n compound interset=%f",CI);
	return 0;
}