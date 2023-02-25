// 1.변수와 상수, 입력과 출력

#include <stdio.h>

int main()
{
    printf("Hello world");
    return 0;
}

// 결과
// Hello world

// #include는 전처리기 전시문으로 불리며, 
// C 언어로 작성한 코드를 번역하는것이 컴파일이고 이 역할을 해주는것이 VSCODE의 역할이다.

#include <stdio.h>

int main(void)
{
    // 함수 본문
    return 0;
}

// 전처리기 시작은 #으로 시작한다. 뒤에 붙은 지시자에 따라 용도는 달라진다.
// #include가 가장 대중적인 지시문이고, (지정한 파일을 코드에 포함)이라는 뜻이다.
// 지시문 표기법 2가지가 있다. (<>)은 보통 표준 파일 추가시에 사용된다. ("")로 추가하긴 한다.

// *정수형 변수*


// 간단한 개념정리 정수형은 정수를 나타낼때, 실수형은 실수를 문자형은 문자를 나타낼때 사용
// int는 정수형에 속함. (ex. -1,0,1) , 실수 (ex. -12.1, 12.1)로 소수점의 유무로 판별이 가능하다.

int age = 20;

// age는 변수명이며, 숫자는 당연히 정수이므로 int가 쓰인다.
// 즉 해당 문장은 age에 정수 20을 저장해라는 의미가 된다.

// Tip. 변수명 작성 규칙

// 1. 알파벳, 숫자, 밑줄(_)을 사용합니다. 이때 알파벳은 대소문자를 구분합니다.

// 2. 첫 글자는 숫자로 시작할 수 없으며, 이름에 공백은 포함할 수 없습니다.

// 3. C 언어에서 키워드로 지정된 단어는 사용할 수 없습니다. 키워드는 자료형을 나타낼 때 사용하는 int 같은 단어입니다

// *변수 선언과 초기화*

int age; // 변수 선언
age = 20; // 변수 초기화
// 또는
int age = 20; // 변수 선언 과 동시에 초기화

// 변수를 사용하기 위해서는 변수 선언후 반드시 초기화가 필요하다.

// 정수형 변수

#include <stdio.h>

int main(void)
{
    int age = 20;
    printf("%d\n", age);
    return 0;
}
// 실행 결과 값 : 20

// %d는 정수형 값을 출력하라는 의미이며, 서식 지정자라고 불린다. 
// 서식 지정자의 유형에 따라 출력하는 값또한 달라진다.


#include <stdio.h>

int main(void)
{
    int age = 20;
    printf("%d\n", age);
    age = 21;
    printf("%d\n", age);
    return 0;
}
// 실행 결과 값 : 20,21

// 처음 변수 지정때 자료형을 명시해야 하지만 선언한 변수에 다시 값을 넣을 경우는 자료형을 넣지 않아도 된다.

// 정수 요약

int 변수명 = 값; // 정수형 변수 선언 및 초기화
printf("%d\n", 변수명); // 정수형 변수의 값 출력
변수명 = 값; // 변수의 값 바꾸기

// 주석 처리 단줄은 // 긴줄은 /* */로 하면된다.

// *실수형 변수*

형식

float 변수명 = 값f;

// float은 실수로 값 뒤에는 항상 f를 붙여야한다.

#include <stdio.h>

int main(void)
{
    float = 32.5f;
    printf("%f\n", f);
    return 0;
}
// 실행 결과 값 : 32.50000

#include <stdio.h>

int main(void)
{
    float = 32.5f;
    printf("%f.2\n", f);
    return 0;
}
// 실행 결과 값 : 32.50

// 코드에 .2 라는 값을 적으면 
// 소수점 이하 세자리 반올림해 둘째 자리까지 출력해라는 뜻이다.

#include <stdio.h>

int main(void)
{
    float = 32.5f;
    printf("%.2f\n", f);
    double d = 2.215;
    printf("%.2lf\n", d);
    return 0;
}
// 실행 결과 값 : 32.50 2.22

// double은 소수점 셋째 자리에 반올림한다. f 혹은 lf 도 반올림이 포함된다.

// 실수 요약

float 변수명 = 값f;
printf("%.nf", 변수명); // n은 출력할 소수점 이하 자릿수, n+1번째 자리에서 반올림
// 또는
double 변수명 = 값;
printf("%.nlf", 변수명); // n은 출력할 소수점 이하 자릿수, n+1번째 자리에서 반올림

// *상수*

// 상수란 절대 변하지 않은 수(값) = const로 사용 단 변수명은 대문자로 작성해야한다.

#include <stdio.h>

int main(void)
{
    int YEAR = 2000;
    printf("내가 태어난 연도 : %d\n", YEAR);
    return 0;
}
// 실행 결과 값 : 2000

#include <stdio.h>

int main(void)
{
    int YEAR = 2000;
    printf("내가 태어난 연도 : %d\n", YEAR);
    YEAR = 2023;
    return 0;
}
// 실행 결과 값 : 오류
// const는 절대값이라 이전에 설정한 값만 가능하여 오류가 걸린다.

// *printf 로 출력*

#include <stdio.h>

int main(void)
{
    // int add = 3 + 7;
    // add = 10
    // printf("3 + 7=%d\n", add);
    printf("%d + %d = %d\n", 3, 7, 3 + 7);
    // 3 + 7 = 10란 값이 나오고
    return 0;
}
// %d 3번 들어간 후 쉼표 뒤 값이 순서대로 삽입 
// 즉 1. 3 , 2. 7이 들어가 3. 10이라는 결과값을 낸다. 

#include <stido.h>

int main(void)
{
    // printf("%d + %d = %d\n", 30, 79, 30 + 79);
    printf("%d * %d = %d\n", 30, 79, 30 * 79);
    return 0;
}
// 실행 결과 값 : 109 , 2370

// *scanf()로 입력받기*

// printf는 출력문이었다면 scanf는 입력문이다. 즉 키보드의 값을 입력받아 저장하는 명령어이다.
#include <stido.h>

int main(void) {
    int input;
    printf("값을 입력하세요 : ");
    // 값을 입력하세요 :
    scanf_s("%d", &input);
    // 2000
    printf("입력값 : %d/n", input);
    // 입력값 : 2000
    return 0;
}

//scanf_s() 함수가 입력값의 크기를 지정한다는 것 외에 둘은 다른 점이 없고 사용법도 거의 같다.
#include <stido.h>

int main(void)
{
    int one, two, three;
    printf("정수 3개를 입력하세요 : ");
    scanf_s("%d %d %d", &one, &two, &three);
    // 100 200 300
    printf("첫 번째 값 : %d\n", one);
    // 첫 번째 값 : 100
    printf("둘 번째 값 : %d\n", two);
    // 둘 번째 값 : 200
    printf("셋 번째 값 : %d\n", three);
    // 셋 번째 값 : 300
    return 0;
}

// *문자형 변수로 입력받기*
#include <stido.h>

int main(void)
{
    char c = 'A';
    printf("%c\n", c);
    return 0;
    // A
}

// char은 일반 변수가 아닌 배열을 사용한다. ex. char str[256];

// *size of 연산자*

// ()안에 넣은 변수, 자료형, 배열등이 메모리 공간을 얼마나 차지하는지 바이트(Byte)로 알려준다.

#include <stido.h>

int main(void)
{
    char str[256];
    //scanf_s("%s", str, sizeof(str)); 
    scanf_s("%s", str, (unsigned int) sizeof(str)); // 형변환
    //scanf_s("%s\n", str, 256); // 문자형 변수 크기 직접 입력
    // 입력
    printf("%c\n",str);
    // 입력
    return 0;
}

#include <stdio.h>

int main(void)
{
    char a, b;
    printf("첫 번째 문자열 입력 : ");
    scanf_s("%s", a, sizeof(a));
    printf("%c\n", a);
    printf("두 번째 문자열 입력 : ");
    scanf_s("%s", b, sizeof(b));
    printf("%c\n", b);
    return 0;
}
// _s는 vs에서 사용하는 함수 그이외에서 실행시에 _s는 빼는게 좋다.

// 배운것을 활용한 간단한 코딩

#include <stdio.h>

int main(void)
{
    // 이름
    char name[256];
    printf("이름이 뭐에요? ");
    scanf_s("%c\n", name, sizeof(name));
    return 0;

    // 나이
    int age;
    printf("나이는 몇살인가요? ");
    scanf_s("%d", &age);

    // 몸무게
    float weight;
    printf("몸무게는 몇 kg인가요? ");
    scanf_s("%f", &weight);

    // 키
    double height;
    printf("키는 몇 cm인가요? ");
    scanf_s("%lf", &height);

    // 범죄명
    char what[256];
    printf("범죄명은 무엇인가요? ");
    scanf_s("%s", what, sizeof(what));

    // 조사 내용 출력
    printf("\n\n---범죄자 정보\n\n");
    printf("%c\n", name);
    printf("%d\n", age);
    printf("%.1f\n", weight);
    printf("%.1lf\n", height);
    printf("%s\n", what);
    return 0;
}

// 단원 마무리
1. 변수

. 변수 변수는 메모리에 어떤 값을 저장할 때 사용

. 변수는 다음 형식으로 선언 후 초기화, 변수 선언시 사용시에 자료형 명시하지 않아도 된다.

형식 
자료형 변수명 = 값;

2. 자료형

. 정수형 변수는 숫자형 값 중에서 정수를 담을 때 사용 int로 표시

형식

int 변수명 = 값;
. 실수형 변수는 숫자형 값 중에 실수를 담을 때 사용 float 또는 double로 표시 float형 값은 값 뒤에 f를 붙여 구분

형식

float 변수명 = 값f;
// 또는
double 변수명 = 값;

. 문자형 변수는 문자나 문자열을 담을 때 사용하고 char로 표시 문자일 때는 작은따옴표로 값을 표시 문자열일 때는 배열을 사용 변수명 뒤에 변수의 크기를 명시

형식

char 변수명 = '값';
// 또는
char 변수명[변수크기];
 

3. 주석

. 주석(comment)은 코드에서 컴퓨터가 실행하지 않고 무시하도록 처리한 부분, 컴퓨터는 코드를 실행할 때 해당 내용을 제외

. 주석은 코드가 어떤 내용인지를 알려 주거나 메모를 남길 때 사용

. 주석을 만드는 방법은 2가지 코드 한 줄을 주석 처리할 때는 해당 줄 앞에 슬래시 2개(//)를 넣습니다. 여러 줄을 주석 처리할 때는 /* */ 사이에 해당 내용을 넣습니다.

4. 상수

. 상수는 절대값이 변하지 않는 수(값), 한 번 선언후 더 이상 값을 못 바꿈

. 변수의 자료형 앞에 const붙이면 상수가 된다. 상수일때 변수명은 보통 대문자 사용

형식

const 자료형 변수명(대문자) = 값;

5. printf()

. 소괄호 안 내용을 출력하는 명령어

. 변수에 담긴 값을 출력시 서식 지정자를 사용, 쉼표 다음에 값 가져올 변수 넣음 서식 지정자는 변수 자료형에 따라 달라진다.

. 출력 값이 여러 개일 경우 서식 지정자또한 같은 개수를 추가, 서식 지정자는 띄어쓰기로 구분해주되 변수는 쉼표로 구분

형식

printf("서식지정자 서식지정자 ...\n", 변수명1, 변수명2, ...); 

6. scanf_s()

. 키보드로 값 입력받아 저장하는 명령어 표준은 scanf()이나 비주얼 스튜디오(VS)에서는 scanf_s() 사용

. 값 입력때 서식 지정자 사용, 쉼표 다음에 값을 저장할 위치 저장

. 입력받은 값은 변수에 저장, 변수명 앞에 &를 붙인다. 배열에 저장할 때는 &없이 변수명만 작성, sizeof 연산자로 크기를 조절해 명시해야된다.

형식

scanf_s("서식지정자", &변수명); // 값이 숫자나 문자일 때
scanf_s("서식지정자", 변수명, sizeof(변수명)); // 값이 문자열일 때

7. 서식 지정자

데이터를 어떻게 해석하는지 알려 주는 것 형식 지정자라고도 불리는데,

자료형     서식 지정자      설명
int           %d          값이 정수일 때

float         %.nf        값이 실수일 때, n은 출력할 소수점 이하 자릿수, n + 1 자리에서 반올림

double        %.nlf       값이 실수일 때, n은 출력할 소수점 이하 자릿수, n + 1 자리에서 반올림

char          %c          값이 문자일 때

              %s          값이 문자열일 때

// 최종 점검

#include <stdio.h>

int main(void)
{
    // 이름
    char name[256];
    printf("이름을 입력해주세요 : ");
    scanf_s("%s", name, sizeof(name));

    // 아이디
    char id[256];
    printf("아이디를 입력해주세요 : ");
    scanf_s("%s", id, sizeof(id));

    // 나이 
    int age;
    printf("나이를 입력해주세요 : ");
    scanf_s("%d", &age);

    // 생일
    char br[256];
    printf("생일를 입력해주세요 : ");
    scanf_s("%s", br, sizeof(br));

    // 신발크기
    int sh;
    printf("발크기를 입력해주세요 : ");
    scanf_s("%d", &sh);

    printf("/n/n---회원 정보/n/n");
    printf("%c\n", name);
    printf("%s\n", id);
    printf("%d", age);
    printf("%s", br);
    printf("%d", sh);
    return 0;
}