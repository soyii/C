#include <stdio.h>
#pragma warning(disable : 4996)
#include <limits.h>
#include <math.h>
/*
int main(void)
{
	
	//100 < x < 200 은 잘못된 표현임
	//(100 < x) && (x < 200) 이라고 해야 맞음
	//i++, i+=1, i=i+1 세개 모두 동일 1만큼증가시킨다는

	int x = -150;
	if (x < 0)
	{
		x = -x;
	}
	printf("x의 절댓값은 %d입니다.\n", x);
	

	int score = 85;
	if (score >= 90)
	{
		printf("당신의 학점은 A입니다.\n");
	}
	else if (score >= 80)
	{
		printf("당신의 학점은 B입니다.\n");
	}
	else if (score >= 70)
	{
		printf("당신의 학점은 C입니다.\n");
	}
	else
	{
		printf("당신의 학점은 D입니다.\n");
	}
	

	//윤년 2월28일까지 4년에 한번은 2월29일까지
	//4년마다, 그렇지만 100년단위 일때는 윤년에 해당하지 않도록
	//400년 단위일때는 어떤 상황이든간에 윤년으로 설정

	int year = 2016;
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다.\n", year);
	}
	

	int i = 1, sum = 0;
	while (i <= 1000) //괄호안이 참값인 경우 반복 수행
	{
		sum = sum + i;
		i++;
	}
	printf("1부터1000까지의 합은 %d입니다.\n", sum);
	

	//사각형 출력하기
#define N 10

	int i, j;
	for (i = 0; i < N; i++) //i는 0부터 N전까지 1씩증가
	{
		for (j = 0; j < N; j++)
		{
			printf("★"); //총 100번 출력
		}
		printf("\n"); //10개 마다 줄바꿈
	}
	

	//피라미드 형태 출력
#define N 20

	int i, j;
	for (i = 0; i < N; i++)
	{
		for (j = N - i - 1; j > 0; j--)
		{
			printf("  ");//별모양은 띄어쓰기 두칸임
		}
		for (j = 0; j < i; j++)
		{
			printf("★ ");
		}
		for (j = 0; j < i; j++)
		{
			printf("★ ");
		}
		printf("\n");
	}
	

	//0이 아닌 모든 수는 참값
	//for(초기화; 조건문; 연산부분);
	//for(;;)아무것도 안넣은것, while(1) 은 무한루프라는 의미
	//break; 가장 가까운 반복문을 즉시 빠져나오기

	char o;
	int x, y;
	while (1)
	{
		printf("수식을 입력하세요 : ");
		scanf("%d %c %d, &x, &o, &y");
		if (o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x + y);
		}
		//c언어의 버퍼를 처리해줘야함
		//엔터를 치는것이 문자를 쓴거라고 여겨 입력이 잘못되었습니다가 출력됨
		getchar(); //줄바꿈 엔터 처리
		printf("프로그램을 종료하시겠습니까? (y/n");
		scanf("%c", &o);
		if (o == 'n' || 'N')
		{
			continue; 
		}
		else if (o == 'y' || 'Y')
		{
			break;
		}
		else
		{
			printf("입력이 잘못되었습니다.")
		}
	}
	

	//정해진 개수의 정수를 더하는 프로그램
	int number, x, i, sum = 0;
	printf("정수의 개수를 입력하세요 : ");
	scanf("%d", &number);
	for (i = 0; i < number; i++)
	{
		printf("정수의 값을 입력하세요 : ");
		scanf("%d", &x);
		sum += x;
	}
	printf("전체 정수의 값은 %d입니다.\n", sum);
	

	//숙제 해보는것
	














	return 0;
}*/