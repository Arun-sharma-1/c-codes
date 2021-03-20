#include<stdio.h>
#include<stdlib.h>
// count vowels and consonent in string using dma
int main(){
    int n,i,vowel=0,consonent=0,digits=0;
	char *p;
	printf("enter no of elements in string ");
	scanf("%d",&n);
	p=(char*)malloc(n*sizeof(char));
	printf("enter string\n");
	fflush(stdin);// for releasing memory
	gets(p);
for(int i=0; *(p+i); i++){
	if(*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u')
	vowel++;
	else
	consonent++;
}
// for(int i=0; i<n; i++)
// {
// 	if(*(p+i)>=48&&*(p+i)<=57)
// 	digits++;
// }
printf("%d vowels are present ",vowel);
printf("%d vowels are present ",consonent);
//printf("\n %d digit",digits);

		
	
	
}
