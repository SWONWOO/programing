#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100 // 배열의 크기 100

int main()
{
    srand((unsigned)time(NULL));    // 시드 초기화
    int i;
    int a[SIZE] = { 0 };
    int max;
    

    for(i = 0; i < SIZE; i++)
    {
        a[rand() % 10]++;
    }

    for (i = 0; i < 10; i++)
        printf("%d\n", a[i]);

    max = 0;

    for (i = 1; i < 10; i++)
        if (a[max] < a[i])
            max = i;

    printf("가장 많이 나온 수:%d", max);
    
    return 0;
}
