#include<stdio.h>
int main(){
  //armstrong
  //125=1^3+2^3+5^3=125
  //1 to 1000
     	 	int r,s,x;
  	
     for(int n=1; n<=1000; n++){
     	int x=n;
     	s=0;
     	while(x!=0){
     	     r=x%10;
     		s=s+r*r*r;
     		x=x/10;
		 }
		 if(n==s)
		 printf("%d\n",n);
	 }
}
