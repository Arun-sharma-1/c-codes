#include<stdio.h>
int main(){
	//   copy one array to another array
	int n;
	int arr[n],a[23];
	printf("enter the no present in arrays");
	scanf("%d",&n);
	printf("enter \n");
	for(int i=0; i<n; i++){
	
	printf("%d number:-",i+1);
	scanf("%d",&arr[i]);
	
}
  for(int i=0; i<n; i++)
   a[i]=arr[i];
   printf("array is \n");
   for(int i=0; i<n; i++)
   printf("%d  ",a[i]);
}
