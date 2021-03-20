#include<stdio.h>
void sort(int a[],int size);
int getmaxindex(int a[],int size);
// sorting of array by recursive fuction
  int main(){
  int a[23],size;
  printf("enter size");
  scanf("%d",&size);
  printf("enter array element\n");
	  for(int i=0; i<size; i++)
	  scanf("%d \t",&a[i]);
 
	  sort(a,size);
 
 for(int i=0; i<size; i++){
 	printf("%d ",a[i]);
 }
	  
}
void sort(int a[],int size){
	if(size>1){
		int maxindex=getmaxindex(a,size);
		int t=a[size-1];
		a[size-1]=a[maxindex];
		a[maxindex]=t;
		sort(a,size-1);
	}
}
int getmaxindex(int a[],int size){
	
	int max,maxindex;
	max=a[0];
	maxindex=0;
	for(int i=0; i<size; i++)
	 
		if(a[i]>max){
		max=a[i];
		maxindex=i;
	}
	return(maxindex);
		
}
