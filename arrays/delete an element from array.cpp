#include<stdio.h>
#define max 10
int len=0;
void printarray(void);
int deleteat(int , int);
int deleteat(int a[], int index){
	if(len>0){
		for(int i=index; i<len-1; i++)
		a[i]=a[i+1];
		len--;	
	}
  else{
	printf("underflow: this list is empty:");
	
}
 }
 
 
 void printarray(int a[]){
 	for(int i=0; i<len; i++){
 		printf("%d  ",a[i]);
	 }
	 printf("\n");
 }
int main(){                
//	 deletion of array
	int arr[max]={1,45,3434,34,23};
	len=5;
	
	printarray(arr);
	deleteat(arr,2);
	printarray(arr);
   
	printarray(a);
}
/*
    #include <stdio.h>
#define max 100
 
int main()
{ 
 int a[max],posn,value,n;
   
	  printf("enter no of elements in  1st array ");
     scanf("%d",&n); 
     printf("enter the posn at which you want to delete value ");
     scanf("%d",&posn);
     
   int i;
        printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }	
     	for(int i=posn-1; i<n-1; i++)
//     for(int i=0; i<n; i++)
      a[i]=a[i+1];
     //  a[posn-1]=value;
     
      
    printf("array is \n");
    for(int i=0; i<n-1 ; i++)
    printf("%d   ",a[i]);
}

*/
