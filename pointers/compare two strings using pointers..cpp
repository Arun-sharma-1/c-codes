#include<stdio.h>
int main(){
	//compare two strings using pointers.
char  s1[23],s2[23];
	printf("enter string 1 ");
	gets(s1);
	printf("enter 2nd string ");
	gets(s2);
char  *p1,*p2;
  int f=0;
	p1=s1;
	p2=s2;
	while(*p1||*p2){
		if(*p1!=*p2){
			f=1;
			break;
		 
		}
			p1++;
			p2++;
	}
	if(f==0)
	printf("strings are same ");
	else
	printf("strings are not same");
	
}
