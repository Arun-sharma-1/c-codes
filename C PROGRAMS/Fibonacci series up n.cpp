 #include<stdio.h>  
 int main() {
//   Fibonacci series up n
   int n,a=-1,b=1;
   printf("enter the number ");
   scanf("%d",&n);            // a  b   c
   for(int i=0; i<=n; i++){  // 0   1   1
    int c=a+b;              // 1  1    2
   	printf("%d ",c);// c=0
   	a=b; // a=1
   	b=c; // b=1                       
   	 
   }}
