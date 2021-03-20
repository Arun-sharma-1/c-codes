#include<stdio.h>
int power(int , int );
 
	// convert binary to decimal
 int power(int x,int y){
	int p=1;
//	x=2;
	for(int i=1; i<=y; i++){
		p=p*x;
	}
	return p;
}
	int main(){
	int bin;
	printf("enter the binary value ");
	scanf("%d",&bin);
	int i=0,y,s=0,rem,pow;
	printf("enter the value of y ");
	scanf("%d",&y);
	while(bin){
		rem=bin%10;
		s=s+ power(2,i)*(rem);
		bin/=10;
		i++;
	}
	printf("decimal digit is %d ",s);
}
