#include <stdio.h>
#include<cs50.h>

int main (void)
{
    int h;
    do
{
     h = get_int("un chiffre positif:");
}
    while(h<=0);

    for(int i=0; i<h ; i++)
    {
        printf("#########################");

        printf("\n");

    }
}