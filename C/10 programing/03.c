#include <stdio.h>

int array_equal(int a[], int b[], int size)  // array_equal() 함수 정의
{
    int i;
    
    for(i = 0; i < 10; i++)
    {
        if(a[i] == b[i])    // a[i] 값과 b[i]값이 같으면
        {
            return 1;       // 1로 리턴
        }
        else                // 그렇지 않다면
            return 0;       // 0으로 리턴
    }
    return 0;
}

int main()
{
    int a[10] = {1,2,3};
    int b[10] = {0};
    int equal = array_equal(a,b,2);
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d" , a[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++)
    {
        printf("%d" , b[i]);
    }
    if(equal == 1)
    {
        printf("\n2개의 배열은 같음");
    }
    else if(equal == 0)
        printf("\n2개의 배열은 다름");
}

