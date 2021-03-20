#include<stdio.h>
#include<stdlib.h>
// printing string using dma
int main(){
    int n;
	char *p;
	printf("enter no of elements in string ");
	scanf("%d",&n);
	p=(char*)malloc(n*sizeof(char));
	printf("enter string");
	fflush(stdin);
	gets(p);
	printf("you entered %s",p);
		
	
	
	
	
}
