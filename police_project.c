#include <stdio.h>

int main(void)
{
	//������Ʈ 
	//������ �������� �����Լ� 
	//�̸�, ����,������,Ű,���˸�

	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("���̴� ����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� ��kg�̿���?");
	scanf_s("%f", &weight);

	double hight;
	printf("Ű�� ��cm����?");
	scanf_s("%lf", &hight);

	char what[256];
	printf("���� ���˸� ���������?");
	scanf_s("%s", what, sizeof(what));

	//���� ���� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�   :  %s\n", name);
	printf("����   :  %d\n", age);
	printf("������   :  %.2f\n", weight);
	printf("Ű   :  %.2lf\n", hight);
	printf("�˸�   :  %s\n", what);



}