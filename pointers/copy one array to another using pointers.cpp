#include<stdio.h>
int main(){
	//   copy one array to another array using pointers
	int n;
	int arr[n],a[23];
	int *p1,*p2;
	p1=arr;
	p2=a;
	printf("enter the no present in arrays");
	scanf("%d",&n);
	printf("enter \n");
	for(int i=0; i<n; i++){
	
	printf("%d number:-",i+1);
	scanf("%d",(p1+i));
	
}
  for(int i=0; *(p1+i); i++)
  *(p2+i)=*(p1+i);
//   a[i]=arr[i];
   
   printf("array is \n");
   for(int i=0; *(p2+i); i++)
   printf("%d  ",*(p2+i));
}
