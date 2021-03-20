#include<stdio.h>
 int main(){
	// copy one string to another using pointer
	char s1[]=" laptop of acer";
	char s2[34]="computer"; 
	char *p;
	p=s1;
		int i;
	for(i=0; *(p+i); i++){
		s2[i]=s1[i];
		
	}
	s2[i]='\0';

	printf("string 2 is %s",s2);// computer
	
	
	
} 
