#include<stdio.h>
int main(){
 
  int i,l,u,n,s=0,y,count=0;
  printf("enter the value of l and u ");
 scanf("%d%d",&l,&u);
 
for( i=u+1; i<=l-1; i++){
  	 int x=n;
  	while(x!=0){
  		int rem=x%10;
  		s=s+rem*rem*rem;
  		x/=10;
  		count++;
	  }
	  if(n==s)
	  printf("%d ",n);
  }


}
