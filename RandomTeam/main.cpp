#include <stdio.h>
#include <string.h>

int main() {
	char str[7] = "��ټ�";

	//printf("%s �� ���� = %d \n", str, strlen(str));// ����� = ��ټ� �� ���� = 6
	//printf("�� : %s\n", str);// ����� = ��ټ�
	//printf("�迭 ũ�� : %d\n\n", sizeof(str));// ����� = �迭 ũ�� : 7
	//�ѱ��� 2Byte�� ���

	for (int i = 0; i < sizeof(str)-1; i=i+2) {
		//printf("%c%c\n", str[i], str[i+1]);
		/*����� =
		��
		��
		��
		*/
	}
	char students[8][1];
	/*
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

	printf("1�� �̸� �Է�\n");
	scanf_s("%s", name1, sizeof(name1));
	scanf_s("%s", name2, sizeof(name2));
	scanf_s("%s", name3, sizeof(name3));
	scanf_s("%s", name4, sizeof(name4));
	scanf_s("%s", name5, sizeof(name5));

	printf("2�� �̸� �Է�\n");
	scanf_s("%s", name6, sizeof(name6));
	scanf_s("%s", name7, sizeof(name7));
	scanf_s("%s", name8, sizeof(name8));
	scanf_s("%s", name9, sizeof(name9));
	scanf_s("%s", name10, sizeof(name10));
	
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
	return 0;
}
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