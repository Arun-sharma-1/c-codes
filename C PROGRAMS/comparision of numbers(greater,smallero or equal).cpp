#include<stdio.h>
int main(){
   // comparision of numbers(greater,smallero or equal)
   int a,b,c;
   printf("enter the value of three numbers \n");
   scanf("%d%d%d",&a,&b,&c);
   if(a>b&&a>c)
   printf("%d is greater",a);
   else if(b>c&&b>a)
   printf("b is greater ");
   else if(c>a&&c>b)
    printf("c is greater ");
    else if(a==b&&b==c)
    printf("all no are equal");
    // a==b&&b==c must be befor a==b and b==c becz after a==b&&b==c they can compared
    else if(a==b)
    printf("a and b are equal and greater than c ");
    else if(b==c)
    printf("b and c are equal and greater than a ");
    else if(a==c)
    printf("a and c are equal and greater than b");
   

}
