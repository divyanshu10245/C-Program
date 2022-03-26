#include<stdio.h>
#include<string.h>
int main(){
	char ele;
	int count=0;
	char s[1000];
	gets(s);
	printf("Enter the element needed to be compare \n");
	scanf("%c",&ele);
	int i=0;
	while(s[i] !='\0'){
		if(s[i] == ele){
			count++;
		}
	i++;
	}
	printf("%d",count);
	return 0;
}
	 
