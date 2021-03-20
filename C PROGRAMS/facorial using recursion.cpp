#include<stdio.h>
// factorial using recursion
long fact(int n){
	if(n>0)
	return(n*fact(n-1));
	else
	return 1;
}
int main(){
	 int x;
	printf("enter no to find its factorial:");
	scanf("%d",&x);
	long int p=fact(x);
	printf("the factorial of %d is %ld:", x,p);
	
}
