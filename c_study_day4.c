// 5장 같은 일 한곳에서 처리하기: 함수
 

// !1. "함수"란? 하나의 목적을 가지고 작업을 수행하기 위해 독립적 설계된 프로그램의 집합으로 정의할 수 있다.
// 	C에서는 이러한 함수들로 구성되어있다. 즉 포함된 함수를 사용해 프로그램의 목적을 이루는 것

// 사칙연산하기

#include <stdio.h>

int main(void) 
{
	int num = 2;
	printf("num은 %d 입니다.\n", num);
	// 2
	num = num + 1;
	printf("num은 %d 입니다.\n", num); -- 덧셈
	// 3
	num = num - 1;
	printf("num은 %d 입니다.\n", num); -- 뺄셈
	// 2
	num = num / 2;
	printf("num은 %d 입니다.\n", num); -- 나누기
	// 1
	num = num * 2;
	printf("num은 %d 입니다.\n", num); -- 곱하기
	// 2
	return 0;
}

// for문으로 10번 작성 해보기

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 10; i++)
	{
		printf("hi %d\n", i);
	}

}

/* 결과 값 :
	hi 1
	hi 2
	hi 3
	hi 4
	hi 5
	hi 6
	hi 7
	hi 8
	hi 9
	hi 10
*/

// 함수 선언 => 사용하기에 앞서 컴파일러에게 '함수'를 쓴다고 보고하는 것

예시.
반환형 함수명(전달값); -- 함수 선언

// 함수 선언을 하고 함수가 어떤 일을 할 것인지 정의해야되는데 그것을 "함수 정의"라고 한다.

예시.
int main(void)
{
	변환형 함수명(전달값) -- 함수 정의
	{
		-- 수행할 문장
	}
	return 0;
}

// int maia(void) 여기서 'void'를 넣는 이유는 함수 선언 반환형으로 
// 'void' 넣으면 함수의 결과를 아무것도 반환하지 않겠다라는 뜻이다.

#include <stdio.h>

void p(int num);

int main(void)
{
	void p(int num)
	{
		printf("num 은 %d입니다.\n", num);
	}
	return 0;
}

// 함수 호출 => 이제 함수 선언 및 정의가 끝났다. 이제 함수 사용을 위해 '함수에 어떤 값 전달하여 작업을 진행해라' 명령을 하는것

void 함수명(전달값); -- 함수 선언

int main(void) {
    함수명(전달값); -- 함수 호출
}

void 함수명(전달값) {} -- 함수 정의

// 사칙 연산 

#include <stdio.h>

void p(int num);

int main(void)
{
	int num = 2;
	p(num);

	num = num + 1;
	p(num);

	num = num - 1;
	p(num);

	num = num / 2;
	p(num);

	num = num * 2;
	p(num);

	return 0;
}

void p(int num) 
{
	printf("num은 %d입니다.\n", num);
}
// 이전보다 훨씬 간편해졌다. printf() 를 p()로 대체 즉 함수를 호출하여 똑같은 수행을 하였기 때문이다.
// 함수가 필요한 이유 

// 1. 코드 중복을 방지하기 위함 

// 2. 다른 프로젝트에 재사용을 할 수 있다. 

// 사용자 정의 함수

// 표준 함수 : 기존 C에 만들어진 함수 printf()외에 등이 있다. 표준 라이브러리 함수, 내장 함수, 시스템 제공 함수라고 불린다.

// 사용자 정의 함수 : 사용자가 직접 만든 함수를 의미한다. 아까 만든 p()처럼 표준 함수가 없을때에 직접 만들 수 있다.

void p(int num) 
// -- void 반환형 => 작업 수행후 결과로 나오는 값의 자료형을 말한다.
// -- 나온 자료형은 반환값이라고 한다.

// 매개 변수 => 함수의 전달값 자리에 들어가는 변수

// 반환 => 'return'을 사용한다. 이제 void를 설정한다면, 반환값이 없기에 return또한 필요없다. 

void  box (int num)
반환형 함수명(매개변수)
{
	return num + 4; -- 반환값
}

// 추가로, 함수의 매개변수는 하나 이상을 넣을 수 있다. 변수마다 자료형을 달리 넣을 수 있고, 하지만 변수명은 달리 지어야한다.
// 매개 변수가 여러 개일 경우에는 쉼표로 구분하고, 매개 변수의 개수와 변환값은 같아야한다.

void box(int p, int p){} -- 잘못된 방식이다. 변수명이 같기에 그렇다.

void box(int p1, int p2, char c, float f){} -- 변수명의 달리 지정했고 쉼표로 구별하였기에 옳은 사용법이다.


void box(int p1, int p2, char c, float f) -- 함수 선언
														 	
void box(int p1, int p2, char c, float f){} -- 함수 정의
// 선언과 정의는 반환형, 함수명, 매개 변수의 종류 및 개수를 동일하게 적어야한다. 단. 매개 변수의 이름은 다르게 적어도 된다.

// !2. 함수의 종류

// 전달값과 반환값의 유무에 따라 5가지로 나뉜다.

// 반환값이 없는 함수

#include <stdio.h>

void function_without_return(); // 함수 선언

int main(void) // 변환값이 없는 함수 호출
{
	function_without_return();
	return 0;
}

void function_without_return() // 함수 정의
{
	printf("반환값이 없는 함수\n");
}

// 반환값이 있는 함수

#include <stdio.h>

int fwr();

int main(void)
{	
	int rt;
	rt = fwr();
	printf("%d\n", rt);
	return 0;
}

int fwr()
{
	printf("반환값이 있다.\n");
	return 10;
}
// 반환값이 있다.
// 10 라는 값이 나온다.

// 변환값이 있는 함수

#include <stdio.h>

void p(int num);
int fwr();

int main(void)
{	
	int rt;
	rt = fwr();
	p(rt);
	return 0;
}

int fwr()
{
	printf("반환값이 있다.\n");
	return 10;
}

void p(int num)
{
	printf("num은 %d입니다.\n", num);
}

// 반환값이 있다.
// num은 10입니다.

// 전달값이 없는 함수

#include <stdio.h>

void none();

int main(void)
{
	none();
	return 0;
}

void none()
{
	printf("전달값이 없다.\n");
}
// 전달갑이 없다.
// 함수 호출시 전달값 없고 함수에도 매개 변수가 없지만, 문제 없이 출력이 되었다.

// 매개 변수 와 인수

// 매개 변수는 호출시 전달되는 값이 저장되는 변수이다. 그에 반해 인수는 함수를 호출할 때 전달하는 값이나 변수이다.

// 전달값이 있는 변수

#include <stdio.h>

void on(int n1, int n2, int n3);

int main(void)
{
	on(1,2,3);
	return 0;
}

void on(int n1, int n2, int n3)
{
	printf("전달값이 잘 전달 되었습니다. 함수는 %d %d %d\n", n1, n2, n3);
}

// 반환값 전달값이 둘 다있는 함수

#include <stdio.h>

int apple(int total, int ate);

int main()
{
	// int ret = apple(5, 2);
	// printf("사과 5개 중에서 2개를 먹으면 %개가 남아있습니다.\n", ret);
	printf("사과 10개 중 4개를 먹어서 %d개가 남아있습니다.\n", 10, 4, apple(10,4));
	// printf 문안에 apple를 넣어 바로 호출하는 형식으로 바꾸었다.
	// 내일 복습
	return 0;
}

int apple(int total, int ate)
{
	printf("전달값 과 반환값이 있는 함수\n");
	return total - ate;
}
// 전달값 과 반환값이 있는 함수
// 사과 5개 중에서 2개를 먹으면 개가 남아있습니다.

// 10개 중에 4개로 변환해서 출력

// !.3 사칙연산 함수 만들기

-- 함수 선언
int add(int n1, int n2);

-- 함수 정의
int add(int n1, n2)
{
	return n1 + n2;
}

-- 함수 호출과 결과 출력
int n = 2;
n = add(n, 3);
p(n);

// 사칙 연산

#include <stdio.h>

void p(int n);

int add(int n1, int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);

int main(void)
{
	int n = 2;

	n = add(n, 3);
	p(n);

	n = sub(n, 3);
	p(n);

	n = mul(n, 3);
	p(n);

	n = div(n, 3);
	p(n);

	return 0;
}

void p(int n)
{
	printf("num은 %d입니다.\n", n);
}

int add(int n1, int n2)
{
	return n1 + n2;
}

int sub(int n1, int n2)
{
	return n1 - n2;
}

int mul(int n1, int n2)
{
	return n1 * n2;
}

int div(int n1, int n2)
{
	return n1 / n2;
}

// num은 5입니다.
// num은 2입니다.
// num은 6입니다.
// num은 2입니다.

// ! 4.프로젝트: 비밀번호 마스터

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2);
void success();
void fail();

int main(void) {
    srand(time(NULL));
    int count = 0;
    for (int i = 1; i <= 5; i++) {
        int num1 = getRandomNumber(i);
        int num2 = getRandomNumber(i);
        showQuestion(i, num1, num2);
        int answer = -1;
        scanf_s("%d", &answer);
        if (answer == -1) {
            printf("\n프로그램을 종료합니다.\n");
            exit(0);
        }
        else if (answer == num1 * num2) {
            success();
            count++;
        }
        else {
            fail();
        }
    }
    printf("\n\n비밀번호 %d개를 맞혔습니다.\n", count);
    return 0;
}

int getRandomNumber(int level) {
    return rand() % (level * 9) + 1;
}

void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n########## %d번째 비밀번호 ########\n", level);
    printf("\n\t%d x %d ?\n\n", num1, num2);
    printf("##################################\n");
    printf("\n비밀번호를 입력하세요.(종료를 원하면 -1 입력) >> ");
}

void success() {
    printf("\n >> Good! 정답입니다.\n");
}

void fail() {
    printf("\n >> 땡! 틀렸습니다.\n");
}