#include<stdio.h>
//Fiboncii series using recursion
int fab(int n)
{  if(n==0)
   return 0;
	if(n==1||n==2)
	return 1;
	else
	return (fab(n-1)+fab(n-2));
}
int main(){
  for(int i=0; i<=10; i++){
  
  
	printf("%d\n",fab(i));
	
}}
