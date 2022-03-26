#include<stdio.h>
int main()
{
	int i,j,n,key,mid,temp=0;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter %d no. of elements \n",n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
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
	printf("enter the element you need to found");
	scanf("%d",&key);
	int first=0;
	int last=n-1;
	while(first<=last){
	mid=(first+last)/2;
	if(key==arr[mid]){
		printf("%d is fount at %d",key,mid+1);
		return 1;
	}
	else if(key<arr[mid]){
		last=mid-1;
	}
	else{
		first=mid+1;
	}
	}
	printf("%d Element not found",key);
	return 0;
}

