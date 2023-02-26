// 3장 조건대로 반복하기: 반복문

// * ++ 연산자 *
#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("a는 %d\n", a);
    return 0;
}
// 실행 결과 값 : 10
// 정수형 변수 a에 10을 넣었기에 당연한 결과다.

#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("a는 %d\n", a);
    // a = a + 1;
    a++;
    // 사용해도 11 이라는 값이 출력된다.
    printf("a는 %d\n", a);
    return 0;
}
// 실행 결과 값 : 10 , 11
// 계산식에 들어간 +, -, /, %, *이 산술 연산자라고 불린다.

#include <stdio.h>

int main(void)
{
    int a = 10;
    printf("a는 %d\n", a);
    a++;
    printf("a는 %d\n", a);
    a++;
    printf("a는 %d\n", a);
    return 0;
}
// 실행 결과 값 : 10, 11, 12로 출력

#include <stdio.h>

int main(void)
{
    int b = 20;
    printf("b는 %d\n", ++b);
    // 전위 (++b을 선처리)
    printf("b는 %d\n", b++);
    // 후위 (++b을 후처리)
    printf("b는 %d\n", b);
    return 0;
}
// 실행 결과 값 : 21, 21, 22로 출력
// ++ -- 와 같이 1 씩 변화를 주는것은 증감연산자라고 불린다. 

// * 반복문 *
// 반복문은 단어 그대로 반복 수행해주는 문장이다. 종류로는 for, while, do while

// for 문
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    //for(선언; 조건; 증감)
    {
        // 수행할 문장
        printf("KOG %d\n", i);
    }
    return 0;
}
/* 실행 결과 값 : 
KOG 1
KOG 2
KOG 3
KOG 4
KOG 5
KOG 6
KOG 7
KOG 8
KOG 9
KOG 10
*/

// while 문

#include <stdio.h>

int main(void)
{
    int i = 1;
    // 선언
    while (i <= 10)
    // while (조건)   
    {
        printf("KOG %d\n", i++);
        // 수행 할 문장(증감);
    }
    return 0;
}
/* 실행 결과 값 : 
KOG 1
KOG 2
KOG 3
KOG 4
KOG 5
KOG 6
KOG 7
KOG 8
KOG 9
KOG 10
*/

// do-while 문

#include <stdio.h>

int main(void)
{
    int i = 1;
    // 선언
    do {
        printf("KOG %d\n", i++);
        // 수행할 문장
    } while (i <= 10);
    // while (조건)
    return 0;
}

// * 이중 반복문 *

#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 3; i++){
        printf("첫 번째 반복문 : %d\n", i);
    }
    return 0;
}

/* 실행 결과 값 : 
첫 번째 반복문 : 1
첫 번째 반복문 : 2
첫 번째 반복문 : 3
*/

#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 3; i++){
        printf("첫 번째 반복문 : %d\n", i);
        for (int j = 1; j <= 5; j++)
        {
            printf("    두 번째 반복문 : %d\n", j);
            // 출력 문장 구분위해 tab키 사용
        }
    }
    return 0;
}

// 구구단 출력하기

#include <stdio.h>

int main(void)
{
    for (int i = 2; i <= 9; i++)
    {
       printf("%d 단 출력\n", i);
        for (int j = 1; j <= 9; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    return 0;
}
// 실행 결과 값 : 2 x 1 =2 ... 9 x 9 = 81

// 별표 출력하기

#include <stdio.h>

int main(void)
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/*실행 결과 값 :
    *
    **
    ***
    ****
    *****
    ******
*/ 

// 오른쪽 병렬 정렬로 별표 출력

#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5 - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
/* 실행 결과 값 : 
         *
        **
       ***
      ****
     *****
*/ 

// 피라미드를 쌓아라

#include <stdio.h>

int main(void)
{
    int floor;
    printf("몇 층으로 쌓을까요? (5~100)");
    scanf_s("%d", &floor);
    for (int i = 0; i < floor; i++) -- 1. 입력받은 값을 반복
    {
        for (int j = i; j < floor - 1; j++) -- 2. 빈칸 출력
        {
            printf(" ");
        }
        for (int k = 0; k < i * 2 + 1; k++) -- 3. 별표 출력
        {
            printf("*");
        }
        printf("\n"); -- 4. 줄바꿈(층 구분)
    }
    return 0;
}
/*실행 결과 값 :

몇 층으로 쌓을까요? (5~100)10
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************

*/

// 마지막 셀프 체크
// 역순 피라미드 제작
#include <stdio.h>

int main(void)
{
    for (int i = 5; i > 0; i--) -- 1. 5라는 값이 선으로 입력 후에 i-1 방식으로 생각하였다.
    {
        for (int j = i; j > 0; j--) -- 2. 위에 i란 값을 *로 출력한다.
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
// 간단히 역순이라고 생각하면된다. 
/*이전에는 0부터 값을 넣어서 진행하였다면 5개를 넣었고
  들어간 값에서 n-1씩으로 생각하여 문제를 풀이하였다.
  \n은 피라미드 계층 구조를 만들기 위하여 넣었다.
*/ 