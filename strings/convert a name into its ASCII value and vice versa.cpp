 #include<stdio.h>
 #include<string.h>
 void print(char s[]);
 void print1(int  s[]);
 int main(){
 	// convert a name into its ASCII value and vice versa
 	char s[34],b;
 	
 	int num[78];
 	printf("enter name ");
 	gets(s);
 	 print(s);
 	 printf("enter a number ");
 	 for(int i=0; i<5; i++)
 	 scanf("%d",&num[i]);
 	 print1(num);
 }
 void print(char s[]){
 	int i;
 	for(  i=0; s[i]!='\0'; i++)
 	printf("\n %c- %d\n ",s[i],s[i]);
 }
 void print1(int s[]){
 	int i;
 	for(int i=0; i<5; i++)
 	printf("\n %d-%c",s[i],s[i]);
 } 
