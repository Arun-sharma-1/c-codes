	// structure
#include<stdio.h>
 // struct is a keyword after struct data type came eg-date.
 // date is a non-primitive data type.
struct date
{
	int day,month,year;
};
int main(){
  struct date today={20,1,2021 };
  struct date d1;
  d1=today;
  
//  today.day=20;
//  today.month=1;
//  today.year=2021;
//  printf("date is %d/%d/%d\n", today.day, today.month,today.year);
  printf("d1 is  %d,%d,%d: ",d1.day,d1.month,d1.year);
  printf("enter date:");
  scanf("%d/%d/%d",&today.day,& today.month,& today.year);
  printf("date is %d/%d/%d\n", today.day, today.month,today.year);
}
