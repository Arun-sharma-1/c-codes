#include<stdio.h>
int main(){
	// smallest no in array
	int n;
	int arr[n];
	printf("enter the no present in arrays");
	scanf("%d",&n);
	printf("enter the ");
	for(int i=0; i<n; i++){
	
	printf("%d number:-",i+1);
	scanf("%d",&arr[i]);
}
  int min=arr[0];
  	for(int i=0; i<n; i++)
  	if(min>arr[i])
  	 min=arr[i];
  	 printf("minimum no is %d",min);
  
	
}
