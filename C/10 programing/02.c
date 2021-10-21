#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10 // 배열의 크기 10

int main()
{
    srand((unsigned)time(NULL)); // 시드 초기화
    int i,j,least,temp;
    int list[SIZE];
    
    for(i=0; i < SIZE; i++)
    {
        
        list[i] = rand() % 100 + 1; //1부터 100까지 정수 중 10개의 수를 랜덤 호출
    }
    for(i = 0; i < SIZE-1; i++)
    {
        least = i;
    
    for(j = i+1; j < SIZE; j++)     //(i+1)번째 원소부터 배열의 마지막 원소 중에서 최소값을 찾음
        if(list[j] < list[least])   // 현재의 최소값과 비교하여 더 작은 정수가 발견되면 그 정수가 들어 있는 인덱스를 least에 저장
            least = j;
    temp = list[i];
    list[i] = list[least];
    list[least] = temp;         // list[i]와 list[least]를 서로 교환
    }

    printf("최대값은 %d\n최솟값은 %d" , list[9] , list[0]);   // 최댓값인 9번째 인덱스 값과 최솟값인 0번째 인덱스 값을 출력
    return 0;
}
