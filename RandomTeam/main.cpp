#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	//char str[] = "kimgeunsoo";
	//char str[] = "parkjongin";
	//char str[] = "mageunwon";
	//char str[] = "parkjaehyung";

	//printf("%s �� ���� = %d \n", str, strlen(str));// ����� = ��ټ� �� ���� = 6
	//printf("�� : %s\n", str);// ����� = ��ټ�
	//printf("�迭 ũ�� : %d\n\n", sizeof(str));// ����� = �迭 ũ�� : 7
	//�ѱ��� 2Byte�� ���

	//for (int i = 0; i < sizeof(str) - 1; i = i + 2) {
		//printf("%c%c\n", str[i], str[i+1]);
		/*����� =
		��
		��
		��
		*/
		//}
	char students[4][20] = {
		"kimgeunsoo", "parkjongin", "mageunwon", "parkjaehyung"
	};


	char i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 20; j++) {
			int a; 
			a = rand() % 4;
			printf("%s\n", students[a]);
			//system("cls");
			return 0;
		}
	}
}
			//char input[20];
	//scanf_s("%s", input);
	/*
	char students[8][10];
	}
	* 2���� �迭�� scanf_s�� �Է��غ����� ������ �ۼ��� ������ ������
	* printf("1�� �̸� �Է�\n");
	scanf_s("%s", &students[0][8], sizeof(students[0][8]));
	scanf_s("%s", &students[1][8], sizeof(students[1][8]));
	scanf_s("%s", &students[2][8], sizeof(students[2][8]));
	scanf_s("%s", &students[3][8], sizeof(students[3][8]));
	scanf_s("%s", &students[4][8], sizeof(students[4][8]));

	printf("2�� �̸� �Է�\n");
	scanf_s("%s", &students[6][8], sizeof(students[6][8]));
	scanf_s("%s", &students[7][8], sizeof(students[7][8]));
	scanf_s("%s", &students[8][8], sizeof(students[8][8]));
	scanf_s("%s", &students[9][8], sizeof(students[9][8]));
	scanf_s("%s", &students[10][8], sizeof(students[10][8]));

	printf("%s%s", students[0][8]);
	* 
	* 
	* 
	* 
		�迭�ȿ� �̸��� �Է��Ϸ��� �õ�
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

	
	printf("1�� ���� %s\t", name1);
	printf("%s\t", name2);
	printf("%s\t", name3);
	printf("%s\t", name4);
	printf("%s\n", name5);

	printf("2�� ���� %s\t", name6);
	printf("%s\t", name7);
	printf("%s\t", name8);
	printf("%s\t", name9);
	printf("%s", name10);

1�� �̸� �Է�
��ټ�
���ٿ�
������
������
�����
2�� �̸� �Է�
������
����ȣ
�̻�ȣ
�̾ƿ�
������
1�� ���� ��ټ� ���ٿ�  ������  ������  �����
2�� ���� ������  ����ȣ  �̻�ȣ  �̾ƿ�  ������*/