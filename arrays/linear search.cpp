 #include<stdio.h>

int seq_search(int a[],int N, int item){
	
	     int flag=1;
	     for(int i=0; i<=N; i++)
		 if(a[i]==item){
		 flag=0;
		 printf("search is succesful item is present at %d index ",i);
		
	}
   if(flag==1){
   	printf("item is not present in the list ");
   }
}
int main(){
	int n,no,array[23];
	  printf("enter the numbers  present in array:");
	  scanf("%d",&n);
	  	  
	   printf("enter the number  to search in  array:");
	  scanf("%d",&no);
	   printf("Enter array elements:\n");
    for(int i=0;i < n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&array[i]);
    }
	   
	seq_search(array,n,no);
}
