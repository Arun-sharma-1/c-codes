#include<stdio.h>
#include<stdlib.h>
// sum of 1d element array
int main(){
	int *p1,*p2,n1,n2;
	printf("enter no element of 1st array ");
	scanf("%d",&n1);
	p1=(int*)malloc(n1*sizeof(int));
	printf("elements of 1st array \n");
	for(int i=0; i<n1; i++)
	scanf("%d",p1+i);
	
	
		printf("enter no element of 2nd array ");
	scanf("%d",&n2);
	p2=(int*)malloc(n2*sizeof(int));
	printf("elements of2nd array \n");
	for(int i=0; i<n2; i++)
	scanf("%d",p2+i);
	if(n1==n2){
	
	printf("sum is \n");
	for(int i=0; i<n1; i++)
	printf("%d\n",(*(p1+i)+*(p2+i)));
}
   else
   printf("additon is not possible due to different order ");
	
}
