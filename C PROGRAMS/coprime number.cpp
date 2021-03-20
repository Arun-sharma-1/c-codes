#include<stdio.h>
int main(){
	//   coprime number 
	//A Co-prime number is a set of numbers or integers which have only 1 as their common factor
	// not completed
	int a,b;
	int i,j ;
	printf("enter the value of a and b ");
	scanf("%d%d",&a,&b);
	int min=a<b?a:b;
 for(int i=2;i<=min; i++){
 	if(a%i==0 && b%i==0)
 	 
 	break;
 	 
 }
	if(i==min+1)
	printf("%d and %d are co prime numbers ",a,b);
	else
	printf("%d and %d are not co prime numbers ",a,b);
		 
}
