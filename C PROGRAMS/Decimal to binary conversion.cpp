#include<stdio.h>
int main(){
//	 Decimal to binary conversion
 //not completed
  	int decimal,bin;
	printf("enter the decimal value ");
	scanf("%d",&decimal);
	int i=0;
	while(decimal){
		
		decimal/=2;
		bin=rem;
		i++;
	}
   
   
   printf("binary no is %d",bin);
   
}
