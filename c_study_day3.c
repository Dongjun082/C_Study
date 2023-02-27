// 4장 조건에 따라 다른 일하기: 조건문

// "조건문"은 프로그램을 실행하는 중에 조건에 따른 분기가 필요할 때 사용된다.
//  1. if-else 문 
형식

if (조건)
{
    // 조건을 만족할 떄 수행할 문장
} 
else
{
    // 조건을 만족하지 않을 때 수행할 문장
}


#include <stdio.h>

int main(void)
{
    // int age = 15; 1.
    int age = 25; // 2.
    if (age >= 20)
    {
        printf("성년 입니다.");
    }else
    {
        printf("청소년 입니다.");
    }
    return 0;
}

// 1 ) 결과 값 : 청소년입니다. 
// 2 ) 결과 값 : 성년입니다. 

// 2. if 단독 사용
#include <stdio.h>

int main(void)
{
    int age = 25;
    if (age >= 20)
    {
        printf("성년 입니다.\n");
    }
    return 0;
}

// if문은 조건이 참이 프로그램이 종료된다. 하지만 조건을 달성하지 못한다면,
// if의 조건을 건너뛰고 "성년 입니다."를 출력하고 프로그램 종료


// *if-else if-else 문
#include <stdio.h>

int main(void)
{
    int age = 10;
    if (age >= 8 && age <= 13)
    {
        printf("초등학생 입니다.\n");
    }
    else if (age >= 14 && age <= 16)
    {
        printf("중학생 입니다.\n");
    }
    else if (age >= 17 && age <= 19)
    {
        printf("고등학생 입니다.\n");
    }
    return 0;
}
// 결과 값 : 초등학생 입니다.

// &&은 이전 시간에 적었던 AND연산자이다. 
// 왼쪽 피연산자와 오른쪽 피연산자가 모두 참(true)이면 참, 하나라도 거짓(false)이면 거짓
// (age >= 8 && age <= 13) 첫번째로 10이 들어가 참으로 "초등학생 입니다." 출력 후 종료 되었지만 
// 다른 15 혹은 18 이었다면, 거짓으로 else if에서 참으로 처리후 출력되어 프로그램이 종료되는 형식이다.

// else if는 여러 번 나온다. 서로 들어온 값이 if에서 조건에 만족하는지 안하는지 판단 유무 안맞다면 계속 처리하는 방식이다.
// 간단하게 말하면 조건이 맞을때까지 확인한다라고 볼 수 있다.

#include <stdio.h>

int main(void)
{
    int age = 24;
    if (age >= 8 && age <= 13)
    {
        printf("초등학생 입니다.\n");
    }
    else if (age >= 14 && age <= 16)
    {
        printf("중학생 입니다.\n");
    }
    else if (age >= 17 && age <= 19)
    {
        printf("고등학생 입니다.\n");
    }
    return 0;
}
// 만약이라는 가정에 조건에 없는 수를 입력하면 값은 출력되지 않는다.
// 왜 일까? 해당 하는 조건이 없으니 결과물이 없는것은 당연한 일이다.

// 오류 수정
#include <stdio.h>

int main(void)
{
    int age = 24;
    if (age >= 8 && age <= 13)
    {
        printf("초등학생 입니다.\n");
    }
    else if (age >= 14 && age <= 16)
    {
        printf("중학생 입니다.\n");
    }
    else if (age >= 17 && age <= 19)
    {
        printf("고등학생 입니다.\n");
    }
    else
    {
        printf("청소년이 아닙니다.\n");
    }
    return 0;
}

// else문을 만들어 모든 조건이 만족하지 못할 경우를 방지하고자 만들었다.
// 결과 값 : 청소년이 아닙니다. 라는 결과가 출력된다.

/* 정리 : if문은 해당 조건만 맞으면 문장을 수행후 종료 하지만 조건에 해당이 안되면 반복 실행하여 else if 에 해당 된다면 종료 
최종까지 조건이 안맞다면 else로 종료된다. */ 

// 3. AND와 OR 연산자

// AND 연산 

if (age >= 8 && age <= 13) 
// 두 조건이 모두 참이면 참 하지만, 하나라도 거짓이면 거짓

// OR 연산 | 비교 연산자(관계 연산자)

if (i == j && k == l)
// 여기서 i j k l에 들어간 값이 같은지 비교하는것이다. && 이 있기에 두 조건 참이면 어떤 문장을 수행할 것이다. 

// 조건 활용 제작

#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 2;
    int k = 3;
    int l = 4;
    

    if (i == j && k == l)
    {
        printf("모든 숫자가 똑같다.\n");
    }
    else
    {
        printf("모든 숫자가 일치하지 않습니다.\n");
    }
    return 0;
}
// 로 한다면 당연히 조건에서 해당되지 않아 출력이 안된다.
// 그렇다면 else문을 추가 => else 조건의 충족해 
// 모든 숫자가 일치하지 않습니다. 가 출력된다.


// 4. OR 연산자

// OR 연산자는 두 조건중에 하나라도 참이면 참으로 조건문을 수행

#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 1;
    int k = 3;
    int l = 3;
    

    if (i == j || k == l)
    {
        printf("i , j 그리고 k , l의 값이 똑같다.\n");
    }
    else
    {
        printf("모든 숫자가 일치하지 않습니다.\n");
    }
    return 0;
}
// 결과 값 : i , j 그리고 k , l의 값이 똑같다. 

// 만약 둘 중에 하나이니 다른 것은 값을 달리해본다면?

#include <stdio.h>

int main(void)
{
    int i = 1;
    // int j = 1;
    int j = 2;
    // int k = 3;
    int k = 10;
    int l = 3;
    

    if (i == j || k == l)
    {
        printf("i , j 그리고 k , l의 값이 똑같다.\n");
    }
    else
    {
        printf("모든 숫자가 일치하지 않습니다.\n");
    }
    return 0;
}
// 역시나 참으로 "i , j 그리고 k , l의 값이 똑같다."가 출력된다.
// 이 처럼 두 조건중 "하나"만 해당 되는것이라 그렇다.

// 또 궁금증이 든다. 두 조건이 둘다 참이 아닌 경우는?
// 두 조건이 참이 아니기 때문에 "모든 숫자가 일치하지 않습니다." 출력이 된다.

// 5. 실행문 중단 | break
// 계속 반복되어 실행하는 문을 탈출 시켜주는 문

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6)
        {
            printf("나머지 학생은 집에 가세요.\n", i);
            break;
        }
        printf("%d번 학생은 조별 발표를 준비하세요.\n", i);
    }
    return 0;
}

/* 결과 값 :

1번 학생은 조별 발표를 준비하세요.
2번 학생은 조별 발표를 준비하세요.
3번 학생은 조별 발표를 준비하세요.
4번 학생은 조별 발표를 준비하세요.
5번 학생은 조별 발표를 준비하세요.
나머지 학생은 집에 가세요

*/ 

// 6. continue 문 

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            if (i == 7)
            {
                printf("%d 번 학생은 아파서 결석입니다.\n", i);
                continue;
                // 이렇게 "continue;"를 사용하면 해당 문장만 반복하고 다음으로 넘어간다.
            }
            printf("%d 번 학생은 조별 발표를 하세요.\n", i);
        }
    }
    return 0;
}
// 7번이 두번 출력되는 상황이 연출되었다. 그 이유는 조건 안에 예외 조건이 존재해서이다.
// 간단히 if안에 또 다른 if가 들어간것 하지만 첫 번째 두 번째를 만족한 7번은 둘 다 참이라 결과가 출력이 되는 상황이 연출된다.

// 첫 번째는 7번이 두 번 나왔지만, continue를 통해 원래의 목적대로 한 번만 나오게 하는 것 을 완료했다.
// break 문 과는 continue문이 어떤식으로 다른지에 대하여 배웠고, 두 문이 실행 흐름을 제어에 자주 사용한다는 것을 기억하고 넘어가자


// 7. 난수 생성
//  난수란 '컴퓨터에게 숫자 골라줘 하면' C 에서는 rand(랜덤 함수)라는 함수를 사용하기 위해 time.h, stdlib.h 파일을 추가해야 된다.
//  전처리기 지시문 = '컴파일 하기전에 선행 처리를 해주는 역할 소스 코드의 일부를 수정' 그리고 전처리기 명령문은 '#'로 시작된다. (;) 세미콜론 미 포함

형식

rand() % 어떤 수;
// 어떤 수는 내가 원하는 수의 범위 지정이라고 볼 수 있다.

rand() % 10; 일 경우 0 ~ 9 까지의 총 10개 중 하나가 나온다.

srand(time(NULL)); 난수 초기화
rand() % 10;
// 난수 초기화는 값이 제대로 나오지 않기 때문에 항상 초기화가 필수라고 볼 수 있다.
// 데이터 오류 경고 메시지가 나올때는 srand((unsigned int) time(NULL)); // 난수 초기화 
// 이 오류는 기대한 형태가 다르기에 뜨는 오류이다. 

// 해당 자료는 쫌더 찾아보고 쫌더 보충할것

#include <stdio.h>

int main(void){
    printf("난수 초기화 이전...\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", rand() % 10);
    }
    srand(time(NULL));
    printf("\n\n난수 초기화 이전...\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", rand() % 10);
    }
    return 0;
}
// 난수 처리전과 후에 완전히 다른 숫자가 나온다. 꼭 난수 초기화를 해야 매번 다른 수가 나온다.
// 하지 않는다면 계속 반복된 숫자만 나왔다.

/* 결과 값 :
난수 초기화 이전...
3675356291

 난수 초기화 이전...
9256964835
*/

// rand() 이용한 간단한 게임 (가위 0, 바위 1, 보 2)

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    srand(time(NULL)); // 난수 초기화
    int a = rand() % 3; // 0~2 반환

    if (a == 0)
    {
        printf("가위\n");
    }
    else if (a == 1)
    {
        printf("바위\n");
    }
    else if(a == 2)
    {
        printf("보\n");
    }
    else
    {
        printf("오류입니다. 관리자를 호출해주세요.\.n");
    }
    return 0;
}

// 8. switch 문

형식

switch (조건) {
    case 값1: -- 
        // 수행할 문장
        break;
    case 값2:
        // 수행할 문장
        break;
    ...
    default:
        // 어떤 값도 해당하지 않을 때 수행할 문장
}

// switch를 이용한 가위 바위 보 게임

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    srand(time(NULL)); // 난수 초기화
    int a = rand() % 3; // 0~2 반환
    switch (a)
        {
        case 0:
            printf("가위\n");
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;
        default:
            printf("오류 발생 관리자를 호출해주세요.\n");
            break;
        }
    return 0;
}

// 만약에 switch (a)안에 a의 값이 1 일 경우 switch에서도 break문은 동일시하게 적용된다.
// 즉 본인에 해당된 값이 아닌 0은 지나치고, 해당된 1 에서 참의 결과를 얻어서 종료하게 되는 것이다. => 바위 출력
// 사용자가 입력을 해서 출력을 한다면 break문을 넣으면 훨씬 원할하게 이용이 가능할 것 같다. 

// 앞에 했던 else if 예제를 switch문으로 변환
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {

    int age = 9;
 
    switch (age)
    {
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
        printf("초딩입니다.\n");
        break;
    case 14:
    case 15:
    case 16:
        printf("중딩입니다.\n");
        break;
    case 17:
    case 18:
    case 19:
        printf("고딩입니다.\n");
        break;
    default:
        printf("오류\n");
        break;
    }
    return 0;
}
// 단순 무식하지만 지금의 나의 한계인 것 같다. 많이 공부를 해서 이것보다 더 나은 코드를 찾아야겠다.
// 일단 입력 받은 숫자가 해당 조건에 만족하면 처리하는 형식으로 짜보았는데, 아무리 생각해도 이런 코딩보다 
// 조금 더 개선안을 생각해야겠다.

// 이번 단원 프로젝트 : 숫자 맞히기

#include <time.h>
#include <stdlib.h>
// 난수 파일 생성
#include <stdio.h>

int main(void)
{
    srand(time(NULL));
    // 난수 초기화
    int num = % 100 + 1;
    // 1~100 난수 생성
    printf("정답 : %d\n", num);
    // 정답 출력
    int answer = 0;
    // 입력 숫자를 저장할 변수
    int chance = 5;
    // 기회 5번을 지정

    while (1)
    {
        chance > 0
        // 기회 다할때까지 작동
        printf("남은 기회 %d번\n", chance);
        // 남은 기회를 출력
        printf("숫자를 맞혀 보세요.(1~100) : ");
        // 게임 시작 문구를 출력
        scanf("%d" &answer);
        // 숫자가 입력 받아준다.
        if (answer > num)
        {
            printf("DOWN \n"); 
        }
        // 결과가 작을 경우
        else if (answer < num)
        {
            printf("UP \n");
        }
        // 결과가 큰 경우
        else if (answer == num)
        {
            printf("SAME \n");
            break;
        } 
        // 결과가 같은 참인 경우 작동 중지
        else
        {
            printf("ERROR \n");
        }
        // 오류 발생을 위한 출력문
        if (chance == 0)
        {
            printf("No Chance \n");
        }
        // 도전 기회가 다 떨어졌을 경우
    }
    return 0;    
}

// 마지막 점검

#include <stdio.h>

int main(void) {

    int coffee_count = 0; // 커피 수량(값을 바꿔 실습하기)
    int sandwich_count = 0; // 샌드위치 수량(값을 바꿔 실습하기)
    int total_price = 0; // 총 금액
    
    if (sandwich_count > 0 && coffee_count > 0)
    {
        total_price = (sandwich_count * 6000) + (coffee_count * 3500);
    } 
    // 샌드위치와 커피 모두 구매 시 샌드위치 6,000원, 커피 3,500원(할인가)으로 계산
    else 
    {
        total_price = (sandwich_count * 6000) + (coffee_count * 4500);
    }
    // 그 외의 경우 샌드위치 6,000원, 커피 4,500원으로 계산
    printf("주문하신 메뉴의 총 금액은 %d원입니다.\n", total_price); // 결과 출력
    return 0;
}

// 숫자 맞히기 게임에서 제작하는데 있어서 약간의 막힘이 있어서 조금 더 상세히 복습을 하고 다시 제작을 해보는걸로 해야겠다.