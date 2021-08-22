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

void ex3() {
    int a[10];
    int sum = 0;
    double avg;
    int result;
    printf("10개의 정수를 입력하시오 : ");
    for (int i = 0; i < 10; i++) {
        printf("%d.", i + 1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
   
    avg = sum / (double)10;
    int b = ((int)(avg * 10)) % 10;
    
    if (b > 4) {
        result = (int)avg + 1;
    }
    else {
        result = (int)avg;
    }
    printf("%d\n", result);
}

int main(void) {
	int exnum;
	printf("예제 번호 입력 : ");
	scanf("%d", &exnum);
	switch (exnum)
	{
	case 2:
		ex2();
		break;
    case 3:
        ex3();
        break;
	}
}
