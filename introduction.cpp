#include <stdio.h>

int main(void)
{
	char name[256];
	printf("�̸��� ������?: ");
	scanf("%s",name, sizeof(name));
	
	int age;
	printf("����̼���?: ");
	scanf("%d",&age);
	
	int height;
	printf("Ű�� ���̼���?: ");
	scanf("%d",&height);
	
	double weight;
	printf("������ ���̼���?: ");
	scanf("%lf",&weight);
	
	char hobby[256]; 
	printf("��̰� �����̼���?: ");
	scanf("%s",hobby, sizeof(hobby));
	
	printf("\n\n----�ڱ�Ұ���----\n\n");
	printf("�̸�:    %s\n", name);
	printf("����:    %d\n", age);
	printf("Ű:      %d\n", height);
	printf("������:  %.1lf\n", weight);
	printf("���:    %s\n", hobby);
	
	return 0;
	
}
