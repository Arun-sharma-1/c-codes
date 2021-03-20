#include<stdio.h>
int main(){
	// 2d strings 
	int i; 
	char s[3][10];
	puts("enter three strings:");
	for(i=0; i<=2; i++)
//	gets(s[i]);
  scanf("%s",& s[i][0]);
	for(i=0; i<=2; i++)
	printf("%s\n",s[i]);
}
