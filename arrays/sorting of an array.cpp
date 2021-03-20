//#include<stdio.h>
//
//int bubble_sort(int[] , int);
//int bubble_sort(int a[],int n){
//	int round , i ,temp ;
//  for(round=1; round<=n-1; round++){
//  
//  for(i=0; i<=n-1-round; i++){
//  
//   if(a[i]>a[i+1]){
//   	temp=a[i];
//   	a[i]=a[i+1];
//   	a[i+1]=temp;
//   }
//   }
//}
//}
//int main(){
//    //sorting of an array .... bubble sort
//    int A[6]={12,34,56,765,1,348};
//    bubble_sort(A,6);
//    for(int i=0; i<=5; i++)
//    printf("%d  ",A[i]);
//    
//}

  #include <stdio.h>
 int bubble_sort(int a[],int n);
 int bubble_sort(int a[],int n){
     	int round , i ,temp ;
  for(round=0; round<=n; round++){
  
  for(i=0; i<=n-1-round ; i++){
  
   if(a[i]>a[i+1]){
   	temp=a[i];
   	a[i]=a[i+1];
   	a[i+1]=temp;
   }
   }
}
 }

int main()
{
     // sorting of array
     int array[34],i,n;
     printf("how many element present in array?");
     scanf("%d",&n);
     printf("enter element of array");
     for(int i=0; i<=n; i++){
          scanf("%d",&array[i]);
     }
     bubble_sort(array,n);
    printf("\n The sorted array is\n");
  for(i=0;i<=n;i++)
  printf("%d\t",array[i]);

    return 0;
}

