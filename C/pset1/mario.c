#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i,h,j;
    do
    {
        h=get_int("Height:");
    }while(h<1||h>8);
    for(i=0;i<h;i++)
    {
        for(j=h-1-i;j>0;j--)
        {
            printf(" ");
        }
        for(j=0;j<i+1;j++)
        {
            printf("#");
        }
        printf("  ");
        for(j=0;j<i+1;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
