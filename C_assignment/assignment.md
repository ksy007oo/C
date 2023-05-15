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
    return 0;
}

int coin_toss( void ) //호출 할 coin_toss함수 설정
{
    int head = rand() % 2; //rand() % 2를 통해 0과 1 얻어옴.
    return head;
}
```
-------------------------------------------------------------------------------------------------------------------------
