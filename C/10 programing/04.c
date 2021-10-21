#include <stdio.h>
#define SIZE 10 // 배열의 크기 10

void array_coppy(int a[], int b[], int size);   // array_coppy() 함수 선언
int i;

int main()
{
    int a[SIZE] = { 1,2,3};
    int b[SIZE];

    for (i = 0; i < SIZE; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");

    array_coppy(a, b, SIZE);    // 함수 호출
}

void array_coppy(int a[], int b[], int size)    // 함수 정의
{
    for (i = 0; i < SIZE; i++)
    {
        b[i] = a[i];    // a[i] 값을 b[i]에 저장
        printf("%d", b[i]);     // 복사 된 값 출력
    }
}
