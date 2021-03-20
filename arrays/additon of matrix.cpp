#include<stdio.h>
int main(){
       // addition of two matrices
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
       printf("addition of both matrix is :");
        for(int i=0; i<=2; i++){
       	for(int j=0; j<=2; j++){
       		c[i][j]=a[i][j]+b[i][j];
       		printf("%d\n",c[i][j]);
       	
       	}
       		printf("\n");
		   }
		

}
