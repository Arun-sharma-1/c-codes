 #include <stdio.h>
 #define max 100
 int bubble_sorta(int a[],int n);
   int bubble_sortb(int b[],int m);
 int bubble_sorta(int a[],int n){
     	int round , i ,temp ;
  for(round=1; round<=n-1; round++){
  
  for(i=0; i<=n-1-round ; i++){
  
   if(a[i]>a[i+1]){
   	temp=a[i];
   	a[i]=a[i+1];
   	a[i+1]=temp;
   }
   }
}
 }
 int bubble_sortb(int b[],int m){
     	int round , i ,temp ;
  for(round=1; round<=m-1; round++){
  
  for(i=0; i<=m-1-round ; i++){
  
   if(b[i]>b[i+1]){
   	temp=b[i];
   	b[i]=b[i+1];
   	b[i+1]=temp;
   }
   }
}
 }

int main()
{
    int a[max],b[max],c[max*2],n,m;
	  printf("enter no of elements in  1st array ");
     scanf("%d",&n); 
   int i,j,k;
        printf("Enter array elements:\n");
    for(i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }	
  	
  	  printf("enter no of elements in  2nd array ");
     scanf("%d",&m); 
   
        printf("Enter array elements:\n");
    for(j=0;j < m;j++)
    {
        printf("Enter element %d:",j+1);
        scanf("%d",&b[j]);
    }	
     
   bubble_sorta(a,n);
    bubble_sortb(b,m);
    printf("sorted array is \n");
     for(i=0;i < n;i++)
    {
        printf("%d   ",a[i]);
        
    }	
     for(j=0;j < m;j++)
    {
        printf(" %d   ",b[j]);
       
    }	
 
	i=0;
	j=0;
	k=0;
	while(i<n&&j<m){
		if(a[i]<b[j]){
			c[k++]=a[i++];
		}
		else
		c[k++]=b[j++];
	}
	
	if(i<n){
		for(;i<n;i++,k++)
		c[k]=a[i];
	}
	else if(j<m){
		for(;j<m;j++,k++){
			c[k]=b[i];
		}
	}
	
	printf("after merging the final array is \n");
	for(k=0; k<m+n; k++){
		printf("%d  ",c[k]);
	}
	
}
