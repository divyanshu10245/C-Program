#include<stdio.h>
int main()
{
	int i,j,n,temp=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d no. of elements \n",n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Unsorted array \n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("sorted list of array \n");
	for(i=0;i<n;i++){
		printf("%d \n",arr[i]);
	}
	return 0;
}
