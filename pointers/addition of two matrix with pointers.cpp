#include<stdio.h>
int main(){
	//addition of two matrix with pointers
	int a[3][3],b[3][3],c[3][3], m[3][3];
	printf("enter elements of 1 st matrix \n");
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			scanf("%d",(*(a+i)+j));
		}
	}
		printf("enter elements of 2nd matrix \n");
	for(int i=0; i<=2; i++){
		for(int j=0; j<=2; j++){
			scanf("%d", (*(b+i)+j));
		}
	} 
	printf("addition of matrix is \n");
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		*(*(c+i)+j)=	*(*(a+i)+j)+*(*(b+i)+j);
			printf("%d  ",*(*(c+i)+j));
		}
		printf("\n");
		}
	printf("multiplication of matrix is \n");
			for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			int sum=0,k;
			for(int k=0; k<=2; k++)
				sum=sum + *(*(a+i)+k) * *(*(b+k)+j);
//        sum += (*(*(a + i/*row*/) + k)) * (*(*(b + k) + j/*coloumn*/));
				*(*(m+i)+j)=sum;
			
		}
	}
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d ",	*(*(m+i)+j));
}
 printf("\n");
}
}
