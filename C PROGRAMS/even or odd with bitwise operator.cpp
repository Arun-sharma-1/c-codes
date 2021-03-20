#include<stdio.h>
int main(){
	int x;
	printf("enter the value of x " );
	scanf("%d",&x);
//	if(x&1)
//	printf("no is odd ");
//	else
//	printf("no is even ");
//  if((x/2*2)==x)
// printf("no is even");
//  else
//  printf("odd");
 	if((x&1)==0)
    printf("no is even");
    else
    printf("odd");
}
