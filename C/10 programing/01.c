#include <stdio.h>
#define SIZE 12 // 배열의 크기 12

int main()
{
    int days[SIZE] = {31,29,31,30,31,30,31,31,30,31,30,31}; // 배열 인덱스 값을 각각 초기화
    int i;
    
    for(i = 0; i < SIZE; i++)
        printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]); // i = 0부터 시작이므로 1월부터 출력하기 위해 i + 1
    return 0;
}
