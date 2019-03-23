#include <stdio.h>
int main()
{
    int r, c, rows;

    printf("Enter number of rows: ");
    scanf("%d",&rows);

    for(r=rows; r>=1; --r)
    {
        for(c=1; c<=r; ++c)
        {
            printf("%d ",c);
        }
        printf("\n");
    }

    return 0;
}