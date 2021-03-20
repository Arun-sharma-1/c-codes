#include<stdio.h>
int main(){
	/*char is alphabet or not*/
		char c;
	printf("enter a characther: ");
	scanf("%c",&c);
	int other=(c=='!'||c=='+'||c=='_'||c=='-');
 char no=(c=='1'||c=='2'||c=='3');
	//'' these are nessacary becz these are constant characthers
//		if((c>='A'&&c<='Z')||(c>='a'&&c<='z')	)
	if((c>=65&&c<=90)||(c>=97&&c<=122)	)
	printf("%c is a characther ",c);
	else if(other)
		printf("these are special symbols");
	else if(no)
	printf("these are digits");
	else
	 printf("not in our data");

 

}
