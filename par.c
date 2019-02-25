#include<stdio.h>
#include<cs50.h>
int main (void)
{
    int a = get_int ("a");
    for(int i=0; i<a ; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("#");
    }
    printf("\n");
}
}