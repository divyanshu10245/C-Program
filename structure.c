#include<stdio.h>
int main(){
	int n,i,avg_college;
	struct student{
		int rollno,english,maths,science,socialscience,lang1,lang2;
		char name[20];
		float avg;
	};
	struct student s[20];
	printf("enter the no.of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("enter the details of students \n");
		printf("enter the  roll no. \n");
		scanf("%d",&s[i].rollno);
		printf("enter the students name \n");
		scanf("%s",s[i].name);
		printf("enter the  english marks \n");
		scanf("%d",&s[i].english);
		printf("enter the  maths marks \n");
		scanf("%d",&s[i].maths);
		printf("enter the  science marks \n");
		scanf("%d",&s[i].science);
		printf("enter the  socialscience marks \n");
		scanf("%d",&s[i].socialscience);
		printf("enter the  language1 marks \n");
		scanf("%d",&s[i].lang1);
		printf("enter the  language2 marks \n");
		scanf("%d",&s[i].lang2);
	}
	for(i=0;i<n;i++){
		s[i].avg=(s[i].english + s[i].maths + s[i].science + s[i].socialscience +s[i].lang1 +s[i].lang2)/6;
	}
	printf("enter the average marks in your college \n");
	scanf("%d",&avg_college);
	for(i=0;i<n;i++){
		printf("student  scored above average\n");
		if(s[i].avg >avg_college){
			printf("%s",s[i].name);
			printf("\n");
		}
		else{
			printf("student scored bellow average\n");
			printf("%s",s[i].name);
			printf("\n");
	}
	}
	return 0;
}
