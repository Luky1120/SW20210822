#include<stdio.h>

void ex2() {
    char word[10];               // �ܾ ������ �迭
    int length;                  // ���ڿ� ����

    printf("�ܾ �Է��ϼ���: ");
    scanf("%s", word);

    length = strlen(word);    // ���ڿ��� ���̸� ����

    // 0���� ���ڿ� ������ ���ݸ�ŭ �ݺ�
    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            printf("0\n");
            return 0;
        }
    }

    printf("1\n");

    return 0;
}

int main(void) {
	int exnum;
	printf("���� ��ȣ �Է� : ");
	scanf("%d", &exnum);
	switch (exnum)
	{
	case 1:
		ex2();
		break;
		
	}
}