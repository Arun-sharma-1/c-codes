 #include<stdio.h>  
 int main() {
//   factorial of a given number
   int n,fact=1;
   printf("enter the number ");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
   	fact=fact*i;

   }
   printf("factorial of %d is %d ",n ,fact);
}
