   #include<stdio.h>
int greatestno(int[],int n);
int smallestno(int[],int n);
int main(){
      int array[4] ,n;
	  printf("enter the numbers of element in  array:");
	  scanf("%d",&n);
      for(int i=0; i<n; i++){
     
	  scanf("%d",&array[i]);	
 
 }
      int min=smallestno(array,n);
      printf("%d is minimum", min);
      int max=greatestno(array,n);
      printf("%d is maximum",max);
 }
 int greatestno(int a[],int n){
     	int max=a[0];// this should be outside the loop otherwise it will check this condn n times
     	
 	 for(int i=1; i<=n; i++){
	   if(a[i]>max)
      	  max=a[i];
      }
      	 return(max); 
      
 }
 
  	 
 int smallestno(int b[],int n){
 	int min=b[0];
 	 for(int i=0; i<n; i++){
	   if(min>b[i])
      	  min=b[i];
      }
      	 return(min); 
      }
