#include <stdio.h>

int main()
{
    int a;
    printf ("Inserisci un numero ");
    scanf ("%d",&a);
    if (a==10)
    {
        printf ("uguale a 10\n");
    }
    else if(a==5)
    {
        printf ("uguale a 5\n");
    }
    else if (a>5)
    {
        printf ("maggiore di 5\n");
    }
    else
    {
        printf ( "minore di 5\n");
    }
}