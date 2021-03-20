/* #include<stdio.h>
 #include<string.h>
 int main(){
 	// compare two string without strcmp
 char s1[23],s2[23];
 	puts("enter s1 string  ");
 	gets(s1);
 	puts("enter 2nd string ");
 	gets(s2);
 	int len1,len2,len=0,i=0,flag=0;
 	len1=strlen(s1);
     len2=strlen(s2);
	if(len1>len2)
 	len=len1;
 	else
 	len=len2;
 	while(i<len)
{
 		if(s1[i]==s2[i])
 		{
 			i++;
// 			continue;
 			
		}
		 if(s1[i]>s2[i])
		 {
		 flag=1;
		 break;
         }
	if(s2[i]>s2[i])
	{
		flag=-1;
		break;
	}
}
	if(flag==0)
	printf("boths strings are same ");
	if(flag==1)
	printf("string 1 is greater than string 2");
	if(flag==-1)
		printf("string 2 is greater than string 1");
	 
 }*/
   #include<stdio.h>
 #include<string.h>
 int main(){
 	// compare two string without strcmp
 	char s1[23],s2[23];
 	puts("enter s1 string  ");
 	gets(s1);
 	puts("enter 2nd string ");
 	gets(s2);
 	int len1,len2,len=0,i=0,flag=0;
 	len1=strlen(s1);
     len2=strlen(s2);
 if(len1!=len2)
      printf("both string are not same ");
      
if(len1==len2){
while(i<len2){
     if(s1[i]==s2[i])
     i++;
}
printf("both strings are same");
}
 
 }
