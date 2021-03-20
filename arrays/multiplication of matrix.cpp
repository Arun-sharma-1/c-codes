 #include<stdio.h>
int main(){
       //  multiplication of two matrices
       int a[3][3],b[3][3],c[3][3];
       printf("enter value of 9 numbers of matrix a:");
       for(int i=0; i<=2; i++){
       	for(int j=0; j<=2; j++){
       		scanf("%d",&a[i][j]);
		   }
	   }
	   
	    printf("enter value of 9 numbers of matrix b:");
       for(int i=0; i<=2; i++){
       	for(int j=0; j<=2; j++){
       		scanf("%d",&b[i][j]);
       		 
		   }
	   
	   }
	   for(int i=0; i<=2; i++)
       	for(int j=0; j<=2; j++){
		   
	   	 int sum=0,k;
       		 for(k=0; k<=2; k++)
       		 sum+=a[i][k]*b[k][i];
       		 c[i][j]=sum;
       	}
         for(int i=0; i<=2; i++){
		 
       	for(int j=0; j<=2; j++)
       	{
       		printf(" %d  ",c[i][j]);
       		
       		
		   }
		   	printf("\n");
		 
}
}
