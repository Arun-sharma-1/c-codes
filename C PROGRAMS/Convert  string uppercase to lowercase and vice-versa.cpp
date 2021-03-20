 #include<stdio.h>
 #include<string.h>
 
 int main(){
   //Convert  string uppercase to lowercase and vice-versa
   char  s[43];
   printf("enter  string ");
  gets(s);
 for(int i=0; s[i]; i++){
/
   if(s[i]>='a' && s[i]<='z')
   s[i]=s[i]-32;//  lowercase to uppercase
  else if  (s[i]>='A'&&s[i]<='Z')
   s[i]+=32; //  uppercaser to lowercase
}
printf("converted string is %s ",s);
 
   
}
