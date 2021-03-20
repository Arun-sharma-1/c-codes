#include<stdio.h>
int main(){
    // sum of even and odd numbers seperately
    int a[6]={1,2,3,4,5,6} , even=0,odd=0;
    for(int i=0; i<=5; i++)
    	if(a[i]%2==0)
    	 even+=a[i];
    	 else
    	 odd+=a[i];
    	 
    	 printf("sum of even is %d \n",even);
    	 printf("sum of odd is %d \n",odd ); 
    	 
    	
	
   
}
