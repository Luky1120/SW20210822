#include<stdio.h>

void ex2() {
    char word[10];               // 단어를 저장할 배열
    int length;                  // 문자열 길이

    printf("단어를 입력하세요: ");
    scanf("%s", word);

    length = strlen(word);    // 문자열의 길이를 구함

    // 0부터 문자열 길이의 절반만큼 반복
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
	printf("예제 번호 입력 : ");
	scanf("%d", &exnum);
	switch (exnum)
	{
	case 1:
		ex2();
		break;
		
	}
}