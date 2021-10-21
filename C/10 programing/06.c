#include <stdio.h>
#define ROW 3
#define COL 5

int main()
{
    int a[ROW][COL] = { {12,56,32,16,98},
                        {99,56,34,41,3},
                        {65,3,87,78,21}};
    int i,j;
    int sum_r = 0;
    int sum_c = 0;
    
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
            sum_r += a[i][j];
        printf("%d행의 합계: %d\n", i, sum_r);
        sum_r = 0;
    }
    
    for (i = 0; i < COL; i++)
    {
        for(j = 0; j < ROW; j++)
        sum_c += a[j][i];
        printf("%d열의 합계: %d\n", i, sum_c);
        sum_c = 0;
    }
}
