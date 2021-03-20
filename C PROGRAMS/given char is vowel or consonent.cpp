#include<stdio.h>
int main(){
	/* given char is vowel or consonent*/
	int lower_case, upper_case;
	char c;
	printf("enter a characther: ");
	scanf("%c",&c);
//	
//		upper_case=('A'||'E'||'I'||'O'||'U'||'a'||'e'||'o'||'u'||'i');
//	if(c==upper_case)

		upper_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='o'||c=='u'||c=='i');
	if(upper_case)	
//	upper_case=('A'||'E'||'I'||'O'||'U');
//	lower_case=('a'||'e'||'i'||'o'||'u');
//	if( c==lower_case||c==upper_case)
//	
//	upper_case=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
//	lower_case=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
//	if(lower_case||upper_case)
 	printf("%c is vowel",c);
		else
		printf("%c is not a vowel:",c);
}
