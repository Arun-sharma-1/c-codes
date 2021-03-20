#include<stdio.h>
#include<stdlib.h>
// count length of string using dma
int main(){
    int n,i;
	char *p;
	printf("enter no of elements in string ");
	scanf("%d",&n);
	p=(char*)malloc(n*sizeof(char));
	printf("enter string");
	fflush(stdin);// for releasing memory
	gets(p);
//	printf("you entered %s",p);
  for(  i=0; *(p+i); i++);
  printf("length is %d",i);
		
	
	
}
