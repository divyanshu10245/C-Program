#include<stdio.h>
int main()
{
	int A[10][10],B[10][10],C[10][10],p,q,m,n,i,j;
	printf("Enter the order of matrix A (p X q)");
	scanf("%d%d",&p,&q);
	printf("Enter the order of matrix B (m X n)");
	scanf("%d%d",&m,&n);
	if(p != n)
	{
		printf("Matrix can't be multiplied \n");
		return -1;
	}
	printf("Enter the Matrix A");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			printf("\t %d",A[i][j]);
		}
		printf("\n");
	}
	printf("Enter the Matrix B");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf(" \t %d",B[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			C[i][j]=0;
			for(int k=0;k<n;k++){
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	printf("matrix C is ");
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf(" \t %d",C[i][j]);
		}
        printf("\n");
	}
	return 0;
}
