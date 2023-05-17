### 동전 던지기 게임

```c
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int coin_toss(void); //호출 받을 함수 정의

int main(void) {
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL)); // 난수 발생 시키는 함수

    for(toss = 0; toss < 100; toss++) { //toss를 100번 실행시켜 coin_toss()가 1이면 heads 증가, 그렇지 않으면 tails 증가
        if(coin_toss() == 1) {
            heads++;
        }
        else {
            tails++;
        }
    }
    printf("동전의 앞면: %d \n", heads);
    printf("동전의 뒷면: %d \n", tails);
    return 0; // 0으로 값을 반환해 실행 종료
}

int coin_toss( void ) //호출 할 coin_toss함수 설정
{
    int head = rand() % 2; //rand() % 2를 통해 0과 1 얻어옴.
    return head;
}
```
-------------------------------------------------------------------------------------------------------------------------

### 자동차 게임

```c
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance) //호출 할 함수 설정
{
    int i;
    printf("CAR#%d: ", car_number);
    for(i = 0; i < distance / 10; i++) /* i를 i < distance / 10 조건에 틀릴 때까지 실행 시키고 '*' 찍기 */
    {
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int i; // main 함수에 변수 i 설정
    int car1_dist = 0, car2_dist = 0; // main 함수에 변수 car1_dist , car2_dist 설정

    srand((unsigned)time(NULL)); //난수 발생 함수

    for(i = 0; i < 6; i++) 
    {
        car1_dist += rand() % 100; // 0~99까지 난수 발생 시킨 후 car1_dist에 더함
        car2_dist += rand() % 100; // 0~99까지 난수 발생 시킨 후 car2_dist에 더함
        disp_car(1, car1_dist); //disp_car함수에 설정한 매개변수 int car_number와 int distance에 1과 car1_dist 대입
        disp_car(2, car2_dist); //disp_car함수에 설정한 매개변수 int car_number와 int distance에 2와 car2_dist 대입
        printf("------------\n");
        _getch(); // 키보드로부터 입력받을 때 사용, 입력된 키 즉시 읽어들임
    }
    return 0; // 0으로 값을 반환해 실행 종료
}
```
----------------------------------------------------------------------------------

### 자동차를 3개로 늘려보자
```c
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <time.h>

void disp_car(int car_number, int distance) // 호출 할 함수 설정
{
    int i;
    printf("CAR#%d: ", car_number);
    for(i = 0; i < distance / 10; i++) /* i를 i < distance / 10 조건에 틀릴 때까지 실행 시키고 '*' 찍기 */
    {
        printf("*");
    }
    printf("\n");
}

int main(void)
{
    int i; // main 함수에 변수 i 설정
    int car1_dist = 0, car2_dist = 0, car3_dist = 0; // main 함수에 변수 car1_dist , car2_dist , car3_dist 설정

    srand((unsigned)time(NULL)); //난수 발생 함수

    for(i = 0; i < 6; i++) 
    {
        car1_dist += rand() % 100; // 0~99까지 난수 발생 시킨 후 car1_dist에 더함
        car2_dist += rand() % 100; // 0~99까지 난수 발생 시킨 후 car2_dist에 더함
        car3_dist += rand() % 100; // 0~99까지 난수 발생 시킨 후 car3_dist에 더함
        disp_car(1, car1_dist); //disp_car함수에 설정한 매개변수 int car_number와 int distance에 1과 car1_dist 대입
        disp_car(2, car2_dist); //disp_car함수에 설정한 매개변수 int car_number와 int distance에 2와 car2_dist 대입
        disp_car(3, car3_dist); //disp_car함수에 설정한 매개변수 int car_number와 int distance에 3과 car3_dist 
        printf("------------\n");
        _getch(); // 키보드로부터 입력받을 때 사용, 입력된 키 즉시 읽어들임
    }
    return 0; // 0으로 값을 반환해 실행 종료
}
```
--------------------------------------------------
### 삼각함수 라이브러리
```c
#include <math.h> // 여러 수학 함수들을 포함하는 표준 라이브러리
#include <stdio.h>

int main(void)
{
    double pi = 3.1415926535; // double형 변수로 pi를 3.1415926535로 설정
    double x, y; // double형 변수로 x, y 설정

    x = pi / 2; // pi / 2 를 x에 대입
    y = sin(x); // y 에 sin ( 1. 570796 ) 대입
    printf("sin( %f ) = %f\n", x, y); // double형의 형식지정자 %f를 사용해 출력
    y = cos(x); // y 에 cos ( 1. 570796 ) 대입 
    printf("cos( %f ) = %f\n", x, y); // double형의 형식지정자 %f를 사용해 출력
}
```
---
### floor()와 ceil()함수
```c
double result, value = 1.6;

result = floor(value); // floor은 내림 , result = 1.0
printf("%lf", result);

result = ceil(value); // ceil은 올림 , result = 2.0
printf("%lf", result);
```
---
### fabs()
- fabs()는 실수를 받아서 절댓값을 반환한다.
```c
printf("12.0의 절댓값은 %f\n", fabs(12.0));
printf("-12.0의 절댓값은 %f\n", fabs(-12.0));
```
---
### pow()와 sqrt()
```c
```
---
### 중간 점검
1. 90도에서의 싸인 값을 계산하는 문장.
```c
#include <stdio.h>
#include <math.h>

int main(void)
{
    int angle = 90;
    int x, y;
    
    x = 90;
    y = sin(x);
    printf("sin(%d) = %d\n", x, y);
}
```
2. rand() % 10 이 계산하는 값의 범위는?
-> 0부터 9까지 난수 발생시켜 계산 
---
### 기타 함수 
1. exit() : exit()을 호출하면 실행중인 프로그램 종료 시킴.
2. system("...") : 운영 체제의 명령 프롬프트에게 명령어를 전달해 실행시키는 함수.
3.  time(NULL) : 현재 시각을 반환. ( 1970년 1월 1일부터 흘러온 초를 반환.)

ex) system() 함수 사용
```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    system("dir");
    printf("아무 키나 치세요\n");
    _getch();
    system("cls");

    return 0;
}
```
---
### 시간 맞추기 게임
```c
#include <stdio.h>
#include <time.h> // <time.h> 헤더 파일에 time() 이 선언되어있음

int main(void)
{
    time_t start, end; // time_t는 unsigned long과 동일
    start = time(NULL); // 라이브러리 함수 time()은 1970년 1월 1일 이후의 시간을 초 단위로 반환
    printf("10초가 되면 아무키나 누르세요.\n");
    while(1) // 무한 루프 발생
    {
        if(getchar()) // getchar()는 함수는 사용자의 입력을 받아들이거나 , 특정한 조건을 확인하거나, 키 입력을 처리하는 루프에서 사용
        {             // 여기서 getchar()는 키 입력을 처리하는 것으로 사용
            break;
        }
    }
    printf("종료되었습니다.\n");
    end = time(NULL);
    printf("경과된 시간은 %ld 초 입니다.\n", end - start);
    return 0;
}
```
---
### 나무 높이 측정
```c

#define _CRT_SECURE_NO_WARNINGS //scanf 에러 방지
#include <stdio.h>
#include <math.h>

int main(void)
{
    double height, distance, tree_height, degrees, radians; // double형으로 변수 지정

    printf("나무와의 길이(단위는 미터): "); // scanf에서 입력받아야할 내용 출력
    scanf("%lf", &distance); // printf에 입력할 값 입력

    printf("측정자의 키(단위는 미터): "); //scanf에서 입력 받아야할 내용 출력
    scanf("%lf", &height); // printf에 입력할 값 입력

    printf("각도(단위는 도): "); //scnaf에서 입력 받아야할 내용 출력
    scanf("%lf", degrees); // printf에 입력할 값 입력

    radians = degrees * (3.141492 / 180.0); // radins 구하는 공식

    tree_height = tan(radians) * distance + height; // 나무 높이 구하는 공식
    printf("나무의 높이(단위는 미터): %lf \n", tree_height); // 위의 코드에서 구한 값 tree_height에서 받아서 출력

    return 0; // 값을 0 으로 반환해서 종료
}
```
--------------------------------------------------
### 삼각함수 그리기
```c
#include <stdio.h>
#include <math.h>
#define PI 3.141592 // PI 값 정의 

double rad(double degree) // 호출 할 rad함수 설정, double형 degree를 매개변수로 설정, double은 반환 타입
{
    return PI * degree / 180.0; // PI * degree / 180.0을 double형으로 반환해서 함수 종료
}

void drawbar(int height) // 호출 할 함수 drawbar설정, int형 height를 매개변수로 설정, void는 반환값이 없다는 뜻
{
    for (int i = 0; i < height; i++) { // 조건이 안 맞을 때까지 for문 반복
        printf("*");
    }
    printf("\n");
}

int main(void) 
{
    int degree, x, y;
    for(degree = 0; degree <= 90; degree += 10) {
         // 사인 값은 -1.0에서 1.0 이므로 정수로 반올림해서 계산
        y = (int)(60 * sin(rad((double)degree)) + 0.5); //double형이었던 rad함수 int형으로 형변환하고 함수 호출해 실행
        drawbar(y); // 위에서 설정한 drawbar함수 호출해 함수 실행
    }
    return 0; // 값을 0으로 반환해 종료
} 
```
----------------------------------------------------
### 공학용 계산기 프로그램 작성
```c
#include <stdio.h>
#include <math.h>

int menu(void)
{
    int n;
    printf("1.팩토리얼\n");
    printf("2.싸인\n");
    printf("3.로그(base 10)\n");
    printf("4.제곱근\n");
    printf("5.순열(nPr)\n");
    printf("6.조합(nCr)\n");
    printf("7.종료\n");
    printf("선택해주세요: ");
    scanf("%d", &n);
    return n;
}

void factorial()
{
    long long n, result = 1, i;
    printf("정수를 입력하시오: ");
    scanf("%lld", &n);
    for(i = 1; i <= n; i++)
    {
        result = result * i;
    }
    printf("결과 = %lld\n\n", result);
}

void sine()
{
    double a, result;
    printf("각도를 입력하시오: ");
    scanf("%lf", &a);
    result = sin(a);
    printf("결과 = %lf\n\n", result);
}

void logBase10()
{
    double a, result;
    printf("실수 값을 입력하시오: ");
    scanf("%lf", &a);
    if (a <= 0.0)
    {
        printf("오류\n");
    }
    else
    {
        result = log10(a);
        printf("결과 = %lf\n\n", result);
    }
}

int main(void)
{
    while(1)
    {
        switch (menu())
        {
            case 1:
            {
                factorial();
                break;
            } 
            case 2:
            {
                sine();
                break;
            }
            case 3:
            {
                logBase10();
                break;
            }
            case 7:
            {
                printf("종료합니다\n");
                return 0;
            }
            default:
            {
                printf("잘못된 선택입니다.\n");
                break;
            }
        }
    }
}
```
---
