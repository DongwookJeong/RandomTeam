#include <stdio.h>
#include <string.h>

int main() {
	char str[7] = "김근수";

	//printf("%s 의 길이 = %d \n", str, strlen(str));// 결과값 = 김근수 의 길이 = 6
	//printf("값 : %s\n", str);// 결과값 = 김근수
	//printf("배열 크기 : %d\n\n", sizeof(str));// 결과값 = 배열 크기 : 7
	//한글은 2Byte씩 사용

	for (int i = 0; i < sizeof(str)-1; i=i+2) {
		//printf("%c%c\n", str[i], str[i+1]);
		/*결과값 =
		김
		근
		수
		*/
	}
	char students[8][1];
	/*
		배열안에 이름을 입력하려고 시도
	int arr[2];
	scanf_s("%s%d", &arr[0]);
	scanf_s("%s", &arr[1]);
	//scanf_s("%s\n", &arr[1][0]);
	//printf("%c\n", arr[0][0]);
	//printf("%d", arr[0][0]);
	printf("%s", arr[0]);
	
	char name1[8];
	char name2[8];
	char name3[8];
	char name4[8];
	char name5[8];
	char name6[8];
	char name7[8];
	char name8[8];
	char name9[8];
	char name10[8];

	printf("1팀 이름 입력\n");
	scanf_s("%s", name1, sizeof(name1));
	scanf_s("%s", name2, sizeof(name2));
	scanf_s("%s", name3, sizeof(name3));
	scanf_s("%s", name4, sizeof(name4));
	scanf_s("%s", name5, sizeof(name5));

	printf("2팀 이름 입력\n");
	scanf_s("%s", name6, sizeof(name6));
	scanf_s("%s", name7, sizeof(name7));
	scanf_s("%s", name8, sizeof(name8));
	scanf_s("%s", name9, sizeof(name9));
	scanf_s("%s", name10, sizeof(name10));
	
	printf("1팀 팀장 %s\t", name1);
	printf("%s\t", name2);
	printf("%s\t", name3);
	printf("%s\t", name4);
	printf("%s\n", name5);

	printf("2팀 팀장 %s\t", name6);
	printf("%s\t", name7);
	printf("%s\t", name8);
	printf("%s\t", name9);
	printf("%s", name10);
	return 0;
}
1팀 이름 입력
김근수
마근원
박재형
박종인
양상희
2팀 이름 입력
원두진
유민호
이상호
이아연
전형민
1팀 팀장 김근수 마근원  박재형  박종인  양상희
2팀 팀장 원두진  유민호  이상호  이아연  전형민*/