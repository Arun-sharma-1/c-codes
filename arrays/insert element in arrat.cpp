 #include<stdio.h>
 #define max 10
  int len=0;//declartion of len is must here//declared globally so we can use this in main also but in main we change the size
 void insertat(int arr[], int index, int value){
 	if(len<max){
 		for(int i=len; i>index; i--){
 			arr[i]=arr[i-1];
 			// arr[i+1]=arr[i]
		 }
		 	 arr[index]=value;
	          len++;
	 }
	 else
	 printf("%d could not be inserted due to overflow\n",value);
 
 }
 
 void printarray(int arr[]){
 	for(int i=0; i<len; i++){
 		printf("%d  ",arr[i]);
	 }
	 printf("\n");
 }
 int main(){
 	int anyarray[max]={12,22,23,24,26};
 	len=5;
 	
 	
 	printarray(anyarray);
 	insertat(anyarray,2,45);
 	printarray(anyarray); 	
 } 
 /*
  #include <stdio.h>
#define max 100
 
int main()
{ 
 int a[max],posn,value,n;
   
	  printf("enter no of elements in  1st array ");
     scanf("%d",&n); 
     printf("enter the posn at which you want to insert value ");
     scanf("%d",&posn);
     printf("enter the value to insert in array  ");
     scanf("%d",&value);
   int i;
        printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }	
    
     for(int i=n-1; i>=posn; i--)
      a[i+1]=a[i];
     //  a[posn-1]=value;
       a[posn]=value;
     
      
    printf("array is \n");
    for(int i=0; i<=n ; i++)
    printf("%d   ",a[i]);
}
*/

