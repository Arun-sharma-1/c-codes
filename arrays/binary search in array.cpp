#include<stdio.h>
// binary search in array
int bubble_sort(int [],int );
 int bubble_sort(int a[],int N ){
 	static int temp;
 	for(int round=1; round<=N-1; round++){
 		for(int i=0; i<=N-1-round; i++)
 		if(a[i]>a[i+1]){
 			temp=a[i];
 			a[i]=a[i+1];
 			a[i+1]=temp;
		 }
	 }
	 
 }
 int binary_search(int L[], int N, int item);
 int binary_search(int L[], int N, int item){
 	// l is lower index and u is upper index
 	int l=0 ,u=N-1,m;
 	while(u>=l){
 		 m=l+u/2;
 		if(item==L[m]){
 			printf("search succesful no is present at %d index ",m);
 			return 1;	
		 }
		 else if(item>L[m])
		  l=m+1;
		  else
		  u=m-1;
	 }
 }
 int main(){
// 	int arr[]={12,13,4,2,24,453,23,11,0};
// 	bubble_sort(arr,9);
// 	for(int i=0; i<=8; i++)
  
     int arr[34],i,n;
     printf("how many element present in array?");
     scanf("%d",&n);
     printf("enter element of array");
     for(int i=0; i<=n; i++){
          scanf("%d",&arr[i]);
     }
 	printf("%d ",arr[i]);
 	int x;
 	printf("enter the no to find in array ");
 	scanf("%d",&x);
 	binary_search(arr,n,x);
 }
