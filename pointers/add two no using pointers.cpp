#include<stdio.h>
int add(int *x,int *y);
int main(){
	// add two no using pointers
	int a=90,b=3;
	int s=add(&a,&b);
	printf("sum is %d ",s);
}
int add(int *x,int *y){
	int c=*x+*y;
//	return c;
}
