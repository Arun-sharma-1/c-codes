#include<stdio.h>
#include<stdlib.h>
// linear search in array using dma.
int main(){
	int n, *p ,search;
		printf("enter the no of elements ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int)); // allocating memory dynamically
	printf("enter elements --\n");
	for(int i=0; i<n; i++){
		printf("%d element- ",i+1);
		scanf("%d",p+i);
	 
}
 int f=0;
	printf("enter element to search in array ");
		scanf("%d",&search);
 for(int i=0; i<n; i++)
 
 	if(*(p+i)==search) {
 	f=1;
 printf("number is present" );
 	
 }
 if(f==0)
  
 printf("number is not present in the list ");


}
