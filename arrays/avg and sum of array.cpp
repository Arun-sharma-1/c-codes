#include<stdio.h>
int main(){
	// avg and sum of arrays
	int a[10],sum=0;
	float avg;
	printf("enter the value of \n");
	for(int i=0; i<=9; i++)
	{
		printf("%d number\t",i+1);
		scanf("%d",&a[i]);
	}
		for(int i=0; i<=9; i++)
	{
		sum+=a[i];
	}
	
 avg=sum/10.0;
 printf("%f\n",avg);
}
