#include<stdio.h>
#include<string.h>
// copying one string to another without strcpy
 int main(){
  int i;
   char s1[23]= "arun ";
   char s2[34]="kushal";
   for( i=0; s1[i]!='\0'; i++){
   	s2[i]=s1[i];
}
   s2[i]='\0';

   printf("%s",s2);
  
}
