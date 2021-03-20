#include<stdio.h>
 int main(){
 	//concatenate two strings using pointers.
 	char a[100]="arun sharma ";
 	char b[]="kushal sharma";
 	int l=0,i;
 	char *p1,*p2;
 
  p1=a;
  while(*p1){
  	p1++;
  }  
  p2=b;
  while(*p2){
  	*p1=*p2;
  	p1++;
  	p2++;
  	
  }
  *p1='\0';
  printf("concated string is %s ",a);
 }
