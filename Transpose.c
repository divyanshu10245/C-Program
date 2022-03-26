#include<stdio.h>
int main()
{
	int A[10][10],p,q;
	printf("Enter the order of matrix A (p X q)");
	scanf("%d%d",&p,&q);
	printf("Enter the Matrix A");
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=0;i<p;i++){
		for(int j=0;j<q;j++){
			printf("\t %d",A[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix A :\n");
	for(int i=0;i<q;i++){
		for(int j=0;j<p;j++){
			printf("\t %d",A[j][i]);
		}
		printf("\n");
	}
	return 0;
}
