#include<stdio.h>
#include<string.h>
int main(){
	int count=0;
 	printf("enter a word\n");
	char s[1000];
	gets(s);
	int i=0;
	while(s[i] !='\0'){
		count++;
		i++;
	}
	printf("%d",count);
	return 0;
}
	 
