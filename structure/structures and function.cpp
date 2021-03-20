// structures and function
#include<stdio.h>
 struct book
 {
   int bookid;
   char title[23];
   int price;	
 };
 struct book input(){
   struct book b;
 	printf("enter bookid, title and price ");   
 	scanf("%d",&b.bookid);
 	fflush(stdin);
 	// for getting space this function must be used  
 	gets(b.title);
 	scanf("%d",&b.price);
 	return(b);
 	
 };
 void display(struct book b){
 	printf("\n bookid-%d  title-%s  price-%d",b.bookid,b.title,b.price);
 }
int main(){
	struct book b1;
	b1=input();// takes nothing and return something 
	display(b1);
}
