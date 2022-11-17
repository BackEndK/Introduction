#include <stdio.h>

int main(void)
{
	char name[256];
	printf("이름이 뭐에요?: ");
	scanf("%s",name, sizeof(name));
	
	int age;
	printf("몇살이세요?: ");
	scanf("%d",&age);
	
	int height;
	printf("키가 몇이세요?: ");
	scanf("%d",&height);
	
	double weight;
	printf("몸무게 몇이세요?: ");
	scanf("%lf",&weight);
	
	char hobby[256]; 
	printf("취미가 무엇이세요?: ");
	scanf("%s",hobby, sizeof(hobby));
	
	printf("\n\n----자기소개서----\n\n");
	printf("이름:    %s\n", name);
	printf("나이:    %d\n", age);
	printf("키:      %d\n", height);
	printf("몸무게:  %.1lf\n", weight);
	printf("취미:    %s\n", hobby);
	
	return 0;
	
}
