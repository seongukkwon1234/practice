#include <stdio.h>

int main(void)
{
	//프로젝트 
	//경찰이 범죄자의 정보입수 
	//이름, 나이,몸무게,키,범죄명

	char name[256];
	printf("이름이 뭐에요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("나이는 몇살이에요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇kg이에요?");
	scanf_s("%f", &weight);

	double hight;
	printf("키는 몇cm에요?");
	scanf_s("%lf", &hight);

	char what[256];
	printf("무슨 범죄를 저질렀어요?");
	scanf_s("%s", what, sizeof(what));

	//조서 내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름   :  %s\n", name);
	printf("나이   :  %d\n", age);
	printf("몸무게   :  %.2f\n", weight);
	printf("키   :  %.2lf\n", hight);
	printf("죄명   :  %s\n", what);



}