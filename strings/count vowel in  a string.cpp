#include<stdio.h>
#include<string.h>
 int main(){
 // count vowel in  a string 
 char s[34];
 printf("enter  string ");
 gets(s);
 int count=0,i=0;
 while(s[i]){
 	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')

   count++;

   i++;
    	
 }
 printf("%d ",count);
 
}
