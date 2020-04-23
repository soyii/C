#include <stdio.h>
#pragma warning(disable : 4996)
#include <limits.h>
#include <math.h>
#define MONTHS 12
#define SECOND_PER_MINUTE 60
/*
int main(void)
{
	printf("Hello World");


	int x;
	x = 5;
	printf("%d", x);
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));

	int x = 50;
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y);
	printf("z = %.2f\n", z);


	int x = INT_MAX;
	printf("int형의 최댓값 x는 %d입니다.\n",x);
	printf("x + 1은%d입니다./n", x + 1);
	//이렇게 할 경우 최댓값을 넘어서 한바퀴돌아서 최소값으로 돌아감


	int x = 10;
	int y = 20;
	printf("x = %d입니다.\n", x);
	printf("y = %d입니다.\n", y);
	printf("x + y = %d입니다.\n", x + y);


	double monthSalary = 1000.5;
	printf("$ %.2f", monthSalary * MONTHS);


	char x = 'A';
	printf("%c", x);


	 int x = 100;
	 printf("10진수로 출력 : %d\n", x);
	 printf("8진수로 출력 : %o\n", x);
	 printf("16진수로 출력 : %x\n", x);


	 int input = 1000;
	 int minute = input / SECOND_PER_MINUTE;
	 int second = input % SECOND_PER_MINUTE;
	 printf("%d초 %d분 %d초 입니다.\n", input, minute, second);


	 int x = 0;
	 printf("현재의 x는 %d입니다.\n", x);
	 x++;
	 printf("현재의 x는 %d입니다.\n", x);
	 printf("현재의 x는 %d입니다.\n", x--);
	 //++또는 --가 뒤에 붙을 경우 해당 줄이 출력 이후에 증감 이루어짐
	  printf("현재의 x는 %d입니다.\n", x);
	  printf("현재의 x는 %d입니다.\n", --x);
	  //증가연산자가변수 앞에 붙으면 먼저 증감 후 출력



	  int x = 100;
	  printf("현재 x의 값은 %d입니다.\n", x);
	  x += 50;  // x = x + 50 등호는 변수 안에 그 값이 들어가게 된다는 의
	  printf("현재 x의 값은 %d입니다.\n", x);
	  x *= 50;
	  printf("현재 x의 값은 %d입니다.\n", x);
	  x %= 3; //50을 3으로 나눈 나머지인 1
	  printf("현재 x의 값은 %d입니다.\n", x);
	  

	int x

	

	int N;

	printf("N = ");
	scanf("%d", &N);

	if (N > 0)
	{
		printf("N");
	}
	else
	{
		printf("ERROR");
	}
	
	//int => %d
	//double = > % lf
   //char = > % c

   

	int N;
	int M;

	printf("N = ");
	scanf("%d", &N);
	printf("M = ");
	scanf("%d", &M);

	if (N > M)
	{
		printf("N");
	}
	else if (M == N)
	{
		printf("같다");
	}
	else
	{
		printf("M");
	}
	


	int main(void)
	{
		int N, M;

		scanf("%d %d", &N, &M);

		if (N > M)
		{
			printf("%d", N);
		}
		else if (N == M)
		{
			printf("같다");
		}
		else
		{
			printf("%d", M);
		}

		



	char c;

	scanf("%c", &c);

	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
		printf("%c", c);
	}

	

int i;

for (i = 1; i < 6; i++) {
	printf("강소이");
}




int x = 50, y = 30;
printf("x가 y와 다른가 ? %d\n", x != y);


and &&
or ||



int x = -50, y = 30;
int absoluteX = (x > 0) ? x : -x;
//조건연산자 - 참값이면 x가 반환되고 거짓이면 -x반환 된다는뜻
int max = (x > y) ? x : y;
printf("x의 절대값은 %d입니다./n", absoluteX);
printf("x와 y중에서 최댓값은 %d입니ㅏㄷ./n", max);



//pow() 는 거듭제곱, abs() 절대값 -> <math.h>라이브러리 

double x = pow(2.0, 20.0);
printf("2의 20제곱은 %.0f입니다.\n", x);
//소수점 이후로 0번쨰 숫자까지 출력 %.0f

	return 0;
		
}*/