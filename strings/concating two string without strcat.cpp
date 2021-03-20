#include<stdio.h>
#include<string.h>
//concating two string without strcat
 int main(){
  int i,l=0;
   char s1[283]= "arun";
   char s2[34]="kushal";
   for(  i=0; s1[i]!='\0'; i++)
   l++;
   for(i=0; s2[i]!='\0';i++)
  s1[i+l]=s2[i];
  s1[l+i]='\0';
 printf("%s",s1);
 /*
    l=strlen(s2);
  for(i=4,j=0;j<=l;i++,j++)
  s1[i]=s2[j];
  puts( s1);*/
}
   
