 #include <stdio.h>
 #define max 100
int main()
{
   int arr[max],i,temp,n;
    printf("enter no of elements in array ");
     scanf("%d",&n); 
   
        printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
	  
	  // swapping logic of array
	   for(i=0;i < n;i+=2)
    {
        temp    = arr[i];
        arr[i]  = arr[i+1];
        arr[i+1]= temp;
    }
	    printf("\nArray elements after swapping adjacent elements:\n");
    for(i=0;i < n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
/* for swapping of half of array 
 for(i=0;i < n/2;i++)
    {
        temp    = arr[i];
        arr[i]  = arr[i+n/2];
        arr[i+n/2]= temp;
    }
     */
/* for reverse of array
for(int i=0; i<n/2; i++{
 temp=arr[i];
 arr[i]=arr[n-1-i];
 arr[n-1-i]=temp;
 }*/
 /* for reverse of array
 
