 #include<stdio.h>
#include<conio.h>
int main()
{ //list of prime no in array
     int ar[100],i,n,j,c;
     
     printf("Enter the size of the array ");
     scanf("%d",&n);
     
        printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&ar[i]);
    }
     
     printf(" Array is -");
     for(i=0;i<n;i++)
     {
           printf("\t %d",ar[i]);
     }
     
     printf("\n   prime numbers in   array are -");
     for(i=0;i<n;i++)
     {
      c=0;     
           for(j=2;j<n;j++)
           {
                 if(ar[i]%j==0)
                 {
                       c=1;
                       break;
                 }
           }
           if(c==0)
           {
                 printf("\t %d",ar[i]);
           }
     }
      
}
 	
 	
 	


