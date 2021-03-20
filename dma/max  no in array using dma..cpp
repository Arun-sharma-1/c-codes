#include<stdio.h>
#include<stdlib.h>
// max and min no in array using dma.
int main(){
	int n, *p ;
		printf("enter the no of elements ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int)); // allocating memory dynamically
	printf("enter elements --\n");
	for(int i=0; i<n; i++){
		printf("%d element- ",i+1);
		scanf("%d",p+i);
}
  int max=*(p);
  int min=*(p);
   for(int i=0; i<n; i++){
   	if(*(p+i)>max)
   	max=*(p+i);
   	if(*(p+i)<min)
   	min=*(p+i);
   	
   }

  printf("maximum is %d\n",max);
  printf("minimum is %d ",min);

}
