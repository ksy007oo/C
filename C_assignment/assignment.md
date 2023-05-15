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
